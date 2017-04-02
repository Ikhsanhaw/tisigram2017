<div class="container">
	<div class="row">
		<div class="col-md-12">
			<ul class="breadcrumb">
				<li><i class="glyphicon glyphicon-book"></i> <?php echo $this->lang->line('problems'); ?></li>
				<li><i class="glyphicon glyphicon-list-alt"></i> <?php echo $this->lang->line('problem'); ?> <?php echo $problem['id']; ?></li>
			</ul>
		</div>
	</div>
	
	<div class="row">
		<div class="col-md-12">
			<a href="<?php echo site_url('admin/problem/runSources/' . $problem['id'] . '/' . $page_offset); ?>" class="btn btn-primary">Run Sources</a>

			<?php if ($this->session->flashdata('add_successful') != ''): ?>
			<div class="alert alert-success">
				Kode sumber berhasil ditambah.
			</div>
			<?php endif; ?>

			<?php if ($this->session->flashdata('delete_successful') != ''): ?>
			<div class="alert alert-success">
				Kode sumber berhasil dihapus.
			</div>
			<?php endif; ?>

			<?php if ($this->session->flashdata('run_source_successful') != ''): ?>
			<div class="alert alert-success">
				Kode sumber berhasil dijalankan.
			</div>
			<?php endif; ?>
			<?php if ($this->session->flashdata('error') != ''): ?>
			<div class="alert alert-danger">
				<?php echo $this->session->flashdata('error'); ?>
			</div>
			<?php endif; ?>

			<h3>Sunting Kode Sumber</h3>
			<table class="table table-bordered table-striped">
				<thead>
					<tr>
						<th class="id-th"><i class="glyphicon glyphicon-tag"></i></th>
						<th><i class="glyphicon glyphicon-download"></i> Kode Sumber</th>
						<th class="problem-filesize-th"><i class="glyphicon glyphicon-download"></i> <?php echo $this->lang->line('size'); ?></th>
						<th>Pengguna</th>
						<th style="width: 100px;">Bahasa</th>
						<th style="width: 200px;">Expected Verdict</th>
						<th style="width: 200px;">Last Run Verdict</th>
						<th class="operations-th" style="width: 80px;"><i class="glyphicon glyphicon-cog"></i></th>
					</tr>
				</thead>
				<tbody>
					<?php foreach ($sources as $s) :?>
						<tr>
							<td class="id-td"><?php echo $s['id']; ?></td>
							<td><?php echo $s['solution']; ?></td>
							<td class="problem-filesize-td"><?php echo $s['solution_size']; ?> B</td>
							<?php foreach ($users as $v) : if ($v['id'] == $s['user_id']) : ?>
							<td><?php echo $v['name']; ?></td>
							<?php endif; endforeach; ?>
							<?php foreach ($languages as $v) : if ($v['id'] == $s['language_id']) : ?>
							<td style="width: 100px;"><?php echo $v['name']; ?></td>
							<?php endif; endforeach; ?>
							<td style="width: 200px;"><?php echo $this->lang->line('verdict_' . $s['expected_verdict']); ?></td>
							<?php
							$run_status = 'danger';
							$run_text = 'Belum dijalankan tes';
							foreach ($results as $r) {
								$r['verdict'] = max(0, $r['verdict']);
								if ($r['verdict'] == 0)
									$icon = '<span class="label label-default"><i class="glyphicon glyphicon-refresh glyphicon"></i> ' . $this->lang->line('verdict_abbr_0') . '</span>';
								else if ($r['verdict'] == 2)
									$icon = '<span class="label label-success"><i class="glyphicon glyphicon-ok glyphicon"></i> ' . $this->lang->line('verdict_abbr_2') . '</span>';
								else if ($r['verdict'] == 3)
									$icon = '<span class="label label-danger"><i class="glyphicon glyphicon-remove glyphicon"></i> ' . $this->lang->line('verdict_abbr_3') . '</span>';
								else if ($r['verdict'] == 99)
									$icon = '<span class="label label-info">' . $this->lang->line('verdict_abbr_99') . '</span>';
								else
									$icon = '<span class="label label-warning"><i class="glyphicon glyphicon-warning-sign glyphicon"></i> ' . $this->lang->line('verdict_abbr_' . $r['verdict']) . '</span>';

								if ($r['solution_id'] == $s['id']) {
									$run_status = $r['verdict'] == $s['expected_verdict'] ? 'success' : 'danger';
									$run_text = sprintf('<a href="%s">%s <small>(%s)</small></a>', 
										site_url('admin/problem/viewSourceResult/' . $r['id']), $icon, $r['end_judge_time']);
									break;
								}
							}
							?>
							<td class="<?php echo $run_status; ?>" style="width: 200px;"><?php echo $run_text; ?></td>
							<td class="operations-td" style="width: 80px;">
								<a href="<?php echo site_url('admin/problem/downloadSource/' . $s['id']); ?>" rel="tooltip" title="<?php echo $this->lang->line('download_checker'); ?>"><i class="glyphicon glyphicon-download"></i></a>
								<a href="<?php echo site_url('admin/problem/deleteSource/' . $problem['id'] . '/'. $s['id'] . '/' . $page_offset); ?>" rel="tooltip" title="<?php echo $this->lang->line('delete'); ?>"><i class="glyphicon glyphicon-trash"></i></a>
							</td>
						</tr>
					<?php endforeach;?>
				</tbody>
			</table>
			<hr />
			
			<h3>Tambah Kode Sumber</h3>
			<?php echo form_open_multipart('', array('class' => 'form-horizontal')); ?>
				<div class="form-group<?php echo form_error('new_source') == '' ? '' : ' error'; ?>">
					<label class="col-sm-2 control-label">Kode Sumber</label>
					<div class = "col-sm-4">
						<input name="new_source" type="file" class="col-md-4 form-control" />
						<span class="help-block"><?php echo form_error('new_source'); ?></span>
					</div>
				</div>
				<div class="form-group<?php echo form_error('language_id') == '' ? '' : ' has-error'; ?>">
					<label class="col-sm-2 control-label">Bahasa</label>
					<div class="col-sm-4">
						<select class = "form-control" name="language_id">
							<?php foreach ($languages as $v) : ?>
								<option value="<?php echo $v['id']; ?>"><?php echo $v['name']; ?></option>
							<?php endforeach; ?>
						</select>
						<?php if (!empty(form_error('language_id'))) : ?><span class="help-block"><?php echo form_error('language_id'); ?></span><?php endif; ?>
					</div>
				</div>
				<div class="form-group<?php echo form_error('expected_verdict') == '' ? '' : ' has-error'; ?>">
					<label class="col-sm-2 control-label">Expected Verdict</label>
					<div class="col-sm-4">
						<select class = "form-control" name="expected_verdict">
							<?php foreach ($verdicts as $v) : ?>
								<option value="<?php echo $v; ?>"><?php echo $this->lang->line('verdict_' . $v); ?></option>
							<?php endforeach; ?>
						</select>
						<?php if (!empty(form_error('expected_verdict'))) : ?><span class="help-block"><?php echo form_error('expected_verdict'); ?></span><?php endif; ?>
					</div>
				</div>

				<input name="hidden" type="hidden" value="1" />

				<div class="col-sm-offset-2 form-actions">
					<button type="submit" class="btn btn-danger"><i class="glyphicon glyphicon-plus"></i> <?php echo $this->lang->line('add'); ?></button>
					<a class="btn btn-default" href="<?php echo site_url('admin/problem/viewAll/' . $page_offset); ?>"><?php echo $this->lang->line('cancel'); ?></a>
				</div>
			</form>
		</div>
	</div>
</div>