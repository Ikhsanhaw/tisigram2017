<div class="container">
	<div class="row">
		<div class="col-md-12">
			<ul class="breadcrumb">
				<li><i class="glyphicon glyphicon-book"></i> <?php echo $this->lang->line('problems'); ?></li>
				<li><i class="glyphicon glyphicon-list-alt"></i> <?php echo $this->lang->line('problem_list'); ?></li>
				<li><i class="glyphicon glyphicon-plus"></i> <a href="<?php echo site_url('admin/problem/edit/0/' . $page_offset); ?>"><?php echo $this->lang->line('add_new_problem'); ?></a></li>
			</ul>
		</div>
	</div>
	
	<div class="row">
		<div class="col-md-12">
			<?php if ($this->session->flashdata('add_successful')): ?>
			<div class="alert alert-success">
				<?php echo $this->lang->line('add_problem_successful'); ?>
			</div>
			<?php endif; ?>

			<?php if ($this->session->flashdata('edit_successful')): ?>
			<div class="alert alert-success">
				<?php echo $this->lang->line('edit_problem_successful'); ?>
			</div>
			<?php endif; ?>

			<?php if ($this->session->flashdata('delete_successful')): ?>
			<div class="alert alert-success">
				<?php echo $this->lang->line('delete_problem_successful'); ?>
			</div>
			<?php endif; ?>

			<?php if ($this->session->flashdata('error') != ''): ?>
			<div class="alert alert-error">
				<?php echo $this->session->flashdata('error'); ?>
			</div>
			<?php endif; ?>

			<h3><?php echo $this->lang->line('problem_list'); ?></h3>

			<?php if (count($problems) == 0) : ?>
				<p><i><?php echo $this->lang->line('no_problem'); ?></i></p>
			<?php else: ?>
				<p><?php printf($this->lang->line('showing_problems'),  (($page_offset-1)*$items_per_page + 1), (($page_offset-1)*$items_per_page + count($problems)), $total_problems); ?></p>
			<?php endif; ?>
			
			<table class="table table-bordered table-striped">
				<thead>
					<tr>
						<th class="id-th"><i class="glyphicon glyphicon-tag"></i></th>
						<th><i class="glyphicon glyphicon-eye-open"></i> <?php echo $this->lang->line('name'); ?></th>
						<th><i class="glyphicon glyphicon-user"></i> <?php echo $this->lang->line('author'); ?></th>
						<th class="problem-limits-th"><i class="glyphicon glyphicon-file"></i> <?php echo $this->lang->line('testcases'); ?></th>
						<th class="problem-limits-th"><i class="glyphicon glyphicon-time"></i> TL / ML</th>
						<th>Status</th>
						<th class="operations-th"><i class="glyphicon glyphicon-cog"></i></th>
					</tr>
				</thead>

				<tbody>
					<?php foreach ($problems as $v) : ?>
					<tr>
						<td class="id-td"><?php echo $v['id']; ?></td>
						<td><?php echo $v['name']; ?></td>
						<td><?php echo $v['author']; ?></td>
						<td<?php echo $v['tc_count'] > 0 ? '' : ' style="background: #FFAAAA;"'; ?>><?php echo $v['tc_count']; ?></td>
						<td><?php echo $v['time_limit']; ?> <?php echo $this->lang->line('second'); ?> / <?php echo $v['memory_limit']; ?> MB</td>
						<?php

						$status_class = 'success';
						$status_btn = 'success';
						$status_text = 'OK';
						if ($v['tc_count'] == 0) {
							$status_class = 'danger';
							$status_btn = 'danger';
							$status_text = '<i class="glyphicon glyphicon-remove"></i> Belum ada testcase';
						} else if ($sources[$v['id']]['all'] == 0) {
							$status_class = 'danger';
							$status_btn = 'danger';
							$status_text = '<i class="glyphicon glyphicon-remove"></i> Belum ada SC';
						} else if ($sources[$v['id']]['valid'] != $sources[$v['id']]['all']) {
							$status_class = 'danger';
							$status_btn = 'danger';
							$status_text = '<i class="glyphicon glyphicon-remove"></i> Actual != Expected';
						} else if ($sources[$v['id']]['ac'] < 2) {
							$status_class = 'danger';
							$status_btn = 'warning';
							$status_text = '<i class="glyphicon glyphicon-warning-sign"></i> Jumlah AC < 2 SC';
						}

						?>
						<td class="<?php echo $status_class; ?>">
							<a class="btn btn-xs btn-<?php echo $status_btn; ?>" href="<?php echo $v['tc_count'] == 0 ? 'javascript:return false;' : site_url('admin/problem/editSources/' . $v['id'] . '/' . $page_offset); ?>" rel="tooltip" style="padding: 1px 5px;" title="Kode Sumber (Source Code)"><?php echo $status_text; ?></a>
						</td>
						<td class="operations-td">
							<a href="<?php echo site_url('admin/problem/view/' . $v['id']); ?>"><i class="glyphicon glyphicon-search" rel="tooltip" title="Lihat Tampilan Soal"></i></a>
							<a href="<?php echo site_url('admin/problem/edit/' . $v['id'] . '/' . $page_offset); ?>" rel="tooltip" title="<?php echo $this->lang->line('edit'); ?>"><i class="glyphicon glyphicon-pencil"></i></a>
							<a href="<?php echo site_url('admin/problem/editTestcases/' . $v['id'] . '/' . $page_offset); ?>" rel="tooltip" title="<?php echo $this->lang->line('testcase'); ?>"><i class="glyphicon glyphicon-file"></i></a>
							<a href="<?php echo site_url('admin/problem/editChecker/' . $v['id'] . '/' . $page_offset); ?>" rel="tooltip" title="<?php echo $this->lang->line('checker'); ?>"><i class="glyphicon glyphicon-check"></i></a>
							<a href="<?php echo site_url('admin/problem/editSources/' . $v['id'] . '/' . $page_offset); ?>" rel="tooltip" title="Kode Sumber (Source Code)"><i class="glyphicon glyphicon-list-alt"></i></a>
							<a href="<?php echo site_url('admin/problem/delete/' . $v['id'] . '/' . $page_offset); ?>" rel="tooltip" title="<?php echo $this->lang->line('delete'); ?>" onclick="return confirm('<?php printf($this->lang->line('confirm_delete_problem'), $v['id'], $v['name']); ?>');"><i class="glyphicon glyphicon-trash"></i></td>
						</tr>
					<?php endforeach; ?>
				</tbody>
			</table>
			
			<ul class="pagination">
				<?php echo $pager; ?>
			</ul>
		</div>
	</div>
	
</div>