<div class="container">
	<div class="row">
		<div class="col-md-12">
			<ul class="breadcrumb">
				<li><i class="glyphicon glyphicon-book"></i> <?php echo $this->lang->line('problems'); ?></li>
				<li><i class="glyphicon glyphicon-list-alt"></i> Lihat Soal <?php echo $problem['id']; ?></li>
				<li><a href="<?php echo site_url('admin/problem/edit/' . $problem['id'] . '/0'); ?>"><i class="glyphicon glyphicon-pencil"></i> Edit Soal</a></li>
				
			</ul>
		</div>
	</div>
	<div class="row">
		<div class="col-md-10 col-md-offset-1">		
			<h2 class="problem-title"><?php echo $problem['name']; ?></h2>
			<table class="table table-bordered problem-limits">
				<tr>
					<td><?php echo $this->lang->line('time_limit'); ?></td><td><?php echo $problem['time_limit']; ?> <?php echo $this->lang->line('second'); ?></td>
				</tr>
				<tr>
					<td><?php echo $this->lang->line('memory_limit'); ?></td><td><?php echo $problem['memory_limit']; ?> MB</td>
				</tr>
			</table>
			<?php echo $problem['statement']; ?>
		</div>
	</div>
</div>