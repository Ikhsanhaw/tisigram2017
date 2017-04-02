<?php if ( ! defined('BASEPATH')) exit('No direct script access allowed');

/**
 * Controller for admin problem page
 *
 * This is the controller responsible for showing the admin problem page.
 *
 * @package controllers
 * @author Ashar Fuadi <fushar@gmail.com>
 */
class Problem extends Admin_Controller
{
	/**
	 * Constructs a new controller object
	 *
	 * This function constructs a new controller.
	 */
	public function __construct()
	{
		parent::__construct();
		$this->load->model('user_manager');
		$this->load->model('language_manager');
		$this->load->model('problem_manager');
		$this->load->library('pagination');
		$this->load->language('problem');
		$this->load->language('submission');
	}

	/**
	 * Redirects to problem viewAll page
	 *
	 * This is the default function for admin Problem controller. This function redirects to problem viewAll page.
	 */
	public function index()
	{
		redirect('admin/problem/viewAll');
	}

	/**
	 * Shows all problems
	 *
	 * This function shows config('items_per_page') problems, starting from $page_offset-th page.
	 *
	 * @param int $page_offset The page number to show.
	 */
	public function viewAll($page_offset = 1)
	{
		$this->ui['header']['page'] = 'problem';
		$this->ui['header']['title'] = $this->lang->line('problems');

		$items_per_page = $this->setting->get('items_per_page');

		$conditions['limit'] = $items_per_page;
		$conditions['offset'] = ($page_offset-1) * $items_per_page;
		$conditions['order_by'] = array('id' => 'ASC');

		$this->ui['content']['problems'] = $this->problem_manager->get_rows(array(), $conditions);
		$this->ui['content']['total_problems'] = $this->problem_manager->count_rows();
		$this->ui['content']['items_per_page'] = $items_per_page;
		$this->ui['content']['page_offset'] = $page_offset;

		/*$query = $this->db->query('SELECT id, (SELECT count(*) FROM solution WHERE problem_id=p.id) source_cnt FROM problem p')->result_array();
		foreach ($query as $q) {
			$this->ui['content']['source_count'][$q['id']] = $q['source_cnt'];
		}*/

		foreach ($this->ui['content']['problems'] as $problem) {
			$sources = $this->problem_manager->get_sources_on_problem($problem['id']);
			$results = $this->db->query('SELECT DISTINCT b.id, a.solution_id, b.submit_time, b.start_judge_time, b.end_judge_time, b.verdict FROM solution_submission a, solution_submission b WHERE a.solution_id = b.solution_id AND b.id = (SELECT max(c.id) FROM solution_submission c WHERE c.solution_id = a.solution_id) AND a.solution_id IN (SELECT id FROM solution WHERE problem_id = ' . $problem['id'] . ')')->result_array();

			$ev = array();
			$v = array();
			foreach ($sources as $s) {
				$ev[$s['id']] = $s['expected_verdict'];
				$v[$s['id']] = 0;
			}

			foreach ($results as $r) {
				$v[$r['solution_id']] = $r['verdict'];
			}

			$this->ui['content']['sources'][$problem['id']]['all'] = 0;
			$this->ui['content']['sources'][$problem['id']]['ac'] = 0;
			$this->ui['content']['sources'][$problem['id']]['valid'] = 0;
			foreach ($ev as $key => $value) {
				$this->ui['content']['sources'][$problem['id']]['all']++;
				if ($v[$key] == $value) {
					$this->ui['content']['sources'][$problem['id']]['valid']++;
					if ($v[$key] == 2) {
						$this->ui['content']['sources'][$problem['id']]['ac']++;
					}
				}
			}
		}

		$config['base_url'] = site_url('admin/problem/viewAll');
		$config['uri_segment'] = 4;
		$config['total_rows'] = $this->ui['content']['total_problems'];

		$this->pagination->initialize($config);
		$this->ui['content']['pager'] = $this->pagination->create_links();

		$this->load->view('admin/header', $this->ui['header']);
		$this->load->view('admin/problem/viewAll', $this->ui['content']);
		$this->load->view('footer', $this->ui['footer']);
	}

	/**
	 * Shows the add or edit problem page
	 *
	 * This function shows an add problem page if $problem_id is 0, otherwise it shows an edit problem page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
	public function edit($problem_id, $page_offset)
	{
		$this->form_validation->set_rules('form[name]', $this->lang->line('name'), 'trim|required');
		$this->form_validation->set_rules('form[author]', $this->lang->line('author'), 'trim|required');
		$this->form_validation->set_rules('form[time_limit]', $this->lang->line('time_limit'), 'trim|required|integer|greater_than[0]');
		$this->form_validation->set_rules('form[memory_limit]', $this->lang->line('memory_limit'), 'trim|required|integer|greater_than[0]');

		if ($this->form_validation->run())
		{
			$form = $this->input->post('form');

			if ($problem_id == 0)
			{
				$this->problem_manager->insert_row($form);
				$this->session->set_flashdata('add_successful', true);
			}
			else
			{
				$this->problem_manager->update_row($problem_id, $form);
				$this->session->set_flashdata('edit_successful', true);
			}

			redirect('admin/problem/view/' . $problem_id);
		}
		else
		{
			if ($problem_id == 0)
				$this->ui['header']['title'] = $this->lang->line('add_new_problem');
			else
			{
				$this->ui['header']['title'] = $this->lang->line('edit_problem') . ' ' . $problem_id;
				$this->ui['content']['problem'] = $this->problem_manager->get_row($problem_id);
			}
			$this->ui['header']['page'] = 'problem';
			$this->ui['header']['custom_js'] = array('vendor/tinymce/tinymce.min.js');
			$this->ui['content']['page_offset'] = $page_offset;

			$this->load->view('admin/header', $this->ui['header']);
			$this->load->view('admin/problem/edit', $this->ui['content']);
			$this->load->view('footer', $this->ui['footer']);
		}
	}

	public function view($problem_id)
	{
		$this->ui['header']['title'] = 'Lihat Soal ' . $problem_id;
		$this->ui['content']['problem'] = $this->problem_manager->get_row($problem_id);
		$this->ui['header']['page'] = 'problem';

		$statement = $this->ui['content']['problem']['statement'];
		$t = $this->problem_manager->get_testcases($problem_id);
		foreach($t as $v) {
			$statement = preg_replace('/\[TC-' . $v['id'] . '-IN\]/', $this->problem_manager->get_testcase_content($v['id'], 'input'), $statement);
			$statement = preg_replace('/\[TC-' . $v['id'] . '-OUT\]/', $this->problem_manager->get_testcase_content($v['id'], 'output'), $statement);
		}
		$this->ui['content']['problem']['statement'] = $statement;

		$this->load->view('admin/header', $this->ui['header']);
		$this->load->view('admin/problem/view', $this->ui['content']);
		$this->load->view('footer', $this->ui['footer']);
	}

 	/**
	 * Shows the edit testcases page
	 *
	 * This function shows the edit testcases page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
 	public function editTestcases($problem_id, $page_offset)
	{
		$this->form_validation->set_rules('hidden', 'Hidden', 'required');
		$this->form_validation->set_rules('new_input', $this->lang->line('input'), 'callback__check_new_input');
		$this->form_validation->set_rules('new_output', $this->lang->line('output'), 'callback__check_new_output');

		if ($this->form_validation->run())
		{
			$args['problem_id'] = $problem_id;
			$args['input'] = $_FILES['new_input']['name'];
			$args['output'] = $_FILES['new_output']['name'];

			$error = $this->problem_manager->add_testcase($args);
			if ($error != '')
				$this->session->set_flashdata('error', $error);
			else
				$this->session->set_flashdata('add_successful', true);
			redirect('admin/problem/editTestcases/' . $problem_id . '/' . $page_offset);
		}
		else
		{
			$this->ui['content']['testcases'] = $this->problem_manager->get_testcases($problem_id);
			$this->ui['content']['problem'] = $this->problem_manager->get_row($problem_id);
			$this->ui['header']['title'] = $this->lang->line('edit_problem_testcases') . ' ' . $problem_id;
			$this->ui['header']['page'] = 'problem';
			$this->ui['content']['page_offset'] = $page_offset;

			$this->load->view('admin/header', $this->ui['header']);
			$this->load->view('admin/problem/editTestcases', $this->ui['content']);
			$this->load->view('footer', $this->ui['footer']);
		}
	}

 	/**
	 * Shows the edit checker page
	 *
	 * This function shows the edit checker page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
 	public function editChecker($problem_id, $page_offset)
	{
		$this->form_validation->set_rules('hidden', 'Hidden', 'required');
		$this->form_validation->set_rules('new_checker', $this->lang->line('checker'), 'callback__check_new_checker');

		if ($this->form_validation->run())
		{
			$args['problem_id'] = $problem_id;
			$args['checker'] = $_FILES['new_checker']['name'];

			$error = $this->problem_manager->add_checker($args);
			if ($error != '')
				$this->session->set_flashdata('error', $error);
			else
				$this->session->set_flashdata('add_successful', true);
			redirect('admin/problem/editChecker/' . $problem_id . '/' . $page_offset);
		}
		else
		{
			$this->ui['content']['checker'] = $this->problem_manager->get_checker_on_problem($problem_id);
			$this->ui['content']['problem'] = $this->problem_manager->get_row($problem_id);
			$this->ui['header']['title'] = $this->lang->line('edit_problem_checker') . ' ' . $problem_id;
			$this->ui['header']['page'] = 'problem';
			$this->ui['content']['page_offset'] = $page_offset;

			$this->load->view('admin/header', $this->ui['header']);
			$this->load->view('admin/problem/editChecker', $this->ui['content']);
			$this->load->view('footer', $this->ui['footer']);
		}
	}

 	/**
	 * Shows the edit checker page
	 *
	 * This function shows the edit checker page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
 	public function editSources($problem_id, $page_offset)
	{
		$this->form_validation->set_rules('hidden', 'Hidden', 'required');
		$this->form_validation->set_rules('new_source', $this->lang->line('checker'), 'callback__check_new_source');

		if ($this->form_validation->run())
		{
			$args['problem_id'] = $problem_id;
			$args['language_id'] = $this->input->post('language_id');
			$args['user_id'] = $this->identity->get_user_id();
			$args['source'] = $_FILES['new_source']['name'];
			$args['expected_verdict'] = $this->input->post('expected_verdict');

			$error = $this->problem_manager->add_source($args);
			if ($error != '')
				$this->session->set_flashdata('error', $error);
			else
				$this->session->set_flashdata('add_successful', true);
			redirect('admin/problem/editSources/' . $problem_id . '/' . $page_offset);
		}
		else
		{
			$this->ui['content']['sources'] = $this->problem_manager->get_sources_on_problem($problem_id);
			$this->ui['content']['results'] = $this->db->query('SELECT DISTINCT b.id, a.solution_id, b.submit_time, b.start_judge_time, b.end_judge_time, b.verdict FROM solution_submission a, solution_submission b WHERE a.solution_id = b.solution_id AND b.id = (SELECT max(c.id) FROM solution_submission c WHERE c.solution_id = a.solution_id) AND a.solution_id IN (SELECT id FROM solution WHERE problem_id = ' . $problem_id . ')')->result_array();
			$this->ui['content']['problem'] = $this->problem_manager->get_row($problem_id);
			$this->ui['content']['languages'] = $this->language_manager->get_rows();
			$this->ui['content']['users'] = $this->user_manager->get_rows();
			$this->ui['content']['verdicts'] = array(2, 3, 4, 5, 6, 7, 8);
			$this->ui['header']['title'] = 'Sunting Kode Sumber' . ' ' . $problem_id;
			$this->ui['header']['page'] = 'problem';
			$this->ui['content']['page_offset'] = $page_offset;

			$this->load->view('admin/header', $this->ui['header']);
			$this->load->view('admin/problem/editSources', $this->ui['content']);
			$this->load->view('footer', $this->ui['footer']);
		}
	}

 	public function runSources($problem_id, $page_offset)
	{
		$this->problem_manager->run_sources($problem_id);
		$this->session->set_flashdata('run_source_successful', true);
		redirect('admin/problem/editSources/' . $problem_id . '/' . $page_offset);
	}

	/**
	 * Deletes a source
	 *
	 * This function deletes a source whose ID is $solution_id and then redirects to edit sources page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $solution_id The source ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
	public function deleteSource($problem_id, $solution_id, $page_offset)
	{
		$error = $this->problem_manager->delete_source($solution_id);
		if ($error != '')
			$this->session->set_flashdata('error', $error);
		else
			$this->session->set_flashdata('delete_successful', true);
		redirect('admin/problem/editSources/' . $problem_id . '/' . $page_offset);
	}

	/**
	 * Deletes a testcase
	 *
	 * This function deletes a testcase whose ID is $testcase_id and then redirects to edit testcases page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $testcase_id The testcase ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
	public function deleteTestcase($problem_id, $testcase_id, $page_offset)
	{
		$error = $this->problem_manager->delete_testcase($testcase_id);
		if ($error != '')
			$this->session->set_flashdata('error', $error);
		else
			$this->session->set_flashdata('delete_successful', true);
		redirect('admin/problem/editTestcases/' . $problem_id . '/' . $page_offset);
	}

	/**
	 * Deletes a checker
	 *
	 * This function deletes a checker whose ID is $checker_id and then redirects to edit checker page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $checker_id The checker ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
	public function deleteChecker($problem_id, $checker_id, $page_offset)
	{
		$error = $this->problem_manager->delete_checker($checker_id);
		if ($error != '')
			$this->session->set_flashdata('error', $error);
		else
			$this->session->set_flashdata('delete_successful', true);
		redirect('admin/problem/editChecker/' . $problem_id . '/' . $page_offset);
	}

	public function downloadSource($solution_id)
	{
		$this->load->helper('download');

		$solution = $this->db->query("SELECT * FROM solution WHERE id=" . $solution_id)->row_array();
		$language = $this->db->query("SELECT * FROM language WHERE id=" . $solution['language_id'])->row_array();

		$content = file_get_contents('secret-solution/' . $solution['problem_id'] . '/' . $solution['id'] . '/source/' . $language['source_name']);

		force_download($solution['solution'], $content);
	}

	/**
	 * Downloads the input of a testcase
	 *
	 * This function downloads the input of the testcase whose ID is $testcase_id.
	 *
	 * @param int $testcase_id The testcase ID.
	 */
	public function downloadTestcaseInput($testcase_id)
	{
		$this->load->helper('download');
		$testcase = $this->problem_manager->get_testcase($testcase_id);
		$content = $this->problem_manager->get_testcase_content($testcase_id, 'input');

		force_download($testcase['input'], $content);
	}

	/**
	 * Downloads the output of a testcase
	 *
	 * This function downloads the output of the testcase whose ID is $testcase_id.
	 *
	 * @param int $testcase_id The testcase ID.
	 */
	public function downloadTestcaseOutput($testcase_id)
	{
		$this->load->helper('download');
		$testcase = $this->problem_manager->get_testcase($testcase_id);
		$content = $this->problem_manager->get_testcase_content($testcase_id, 'output');

		force_download($testcase['output'], $content);
	}

	/**
	 * Downloads the checker of a problem
	 *
	 * This function downloads the checker whose ID is $checker_id.
	 *
	 * @param int $checker_id The testcase ID.
	 */
	public function downloadChecker($checker_id)
	{
		$this->load->helper('download');
		$checker = $this->problem_manager->get_checker($checker_id);
		$content = $this->problem_manager->get_checker_content($checker_id);

		force_download($checker['checker'], $content);
	}

	/**
	 * Checks whether an input file is supplied
	 *
	 * This function checks whether the user has chosen an input file to add.
	 *
	 * @return boolean TRUE if an input file is supplied, or FALSE otherwise.
	 */
	public function _check_new_input()
	{
		if (empty($_FILES['new_input']['name']))
		{
			$this->form_validation->set_message('_check_new_input', $this->lang->line('input_required'));
			return FALSE;
		}
		return TRUE;
	}

	/**
	 * Checks whether an output file is supplied
	 *
	 * This function checks whether the user has chosen an output file to add.
	 *
	 * @return boolean TRUE if an output file is supplied, or FALSE otherwise.
	 */
	public function _check_new_output()
	{
		if (empty($_FILES['new_output']['name']))
		{
			$this->form_validation->set_message('_check_new_output', $this->lang->line('output_required'));
			return FALSE;
		}
		return TRUE;
	}

	/**
	 * Checks whether a checker file is supplied
	 *
	 * This function checks whether the user has chosen a checker file to add.
	 *
	 * @return boolean TRUE if an checker file is supplied, or FALSE otherwise.
	 */
	public function _check_new_checker()
	{
		if (empty($_FILES['new_checker']['name']))
		{
			$this->form_validation->set_message('_check_new_checker', $this->lang->line('checker_required'));
			return FALSE;
		}
		return TRUE;
	}

	/**
	 * Checks whether a source file is supplied
	 *
	 * This function checks whether the user has chosen a source file to add.
	 *
	 * @return boolean TRUE if a source file is supplied, or FALSE otherwise.
	 */
	public function _check_new_source()
	{
		if (empty($_FILES['new_source']['name']))
		{
			$this->form_validation->set_message('_check_new_source', $this->lang->line('checker_required'));
			return FALSE;
		}
		return TRUE;
	}

	/**
	 * Deletes a problem
	 *
	 * This function deletes a problem whose ID is $problem_id and then redirects to viewAll page.
	 *
	 * @param int $problem_id The problem ID.
	 * @param int $page_offset The previous viewAll page number.
	 */
	public function delete($problem_id, $page_offset)
	{
		$this->problem_manager->delete_row($problem_id);
		$this->session->set_flashdata('delete_successful', true);
		redirect('admin/problem/viewAll/' . $page_offset);
	}

	public function viewSourceResult($submission_id)
	{
		$submission = $this->problem_manager->get_source_row($submission_id);

		if ( ! $submission)
			show_404();

		$this->ui['header']['title'] = 'Pengumpulan Juri ' . $submission_id;
		$this->ui['header']['page'] = 'submission';
		$this->ui['header']['custom_css'] = array('vendor/google-code-prettify/bin/prettify.min.css');
		$this->ui['header']['custom_js'] = array('vendor/google-code-prettify/bin/prettify.min.js');
		$this->ui['content']['submission'] = $submission;
		
		$judgings = $this->problem_manager->get_source_judgings($submission_id);
			
		$this->ui['content']['judgings'] = $judgings;

		$this->ui['content']['contest_id'] = -1;
		$this->ui['content']['problem_id'] = -1;
		$this->ui['content']['user_id'] = -1;
		$this->ui['content']['page_offset'] = -1;
		
		$this->load->view('admin/header', $this->ui['header']);
		$this->load->view('admin/submission/view', $this->ui['content']);
		$this->load->view('footer', $this->ui['footer']);
	}
}

/* End of file problem.php */
/* Location: ./application/controllers/admin/problem.php */
