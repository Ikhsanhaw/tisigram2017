<div class="container">
	<div class="row">
		<div class="col-md-12">
			<ul class="breadcrumb">
				<li>
					<i class="glyphicon glyphicon-off"></i> <?php echo $this->lang->line('please_login'); ?>
				</li>
			</ul>
		</div>
	</div>

	<?php if ($this->session->flashdata('error')) : ?>
		<div class="row">
			<div class="col-md-5">
				<div class="alert alert-danger">
					<?php echo $this->session->flashdata('error'); ?>
			    </div>
			</div>
		</div>
	<?php endif; ?>

	<div class="row" style="margin-bottom: 3em;">
		<div class="col-md-5">
			<div class="hf-login-form">
				<form class="form-horizontal" action="" method="post">
					<div class="form-group<?php echo form_error('form[username]') ? ' has-error' : ''; ?>">
						<label class="col-sm-3 control-label"><?php echo $this->lang->line('username'); ?>:</label>
						<div class="col-sm-9">
							<input name="form[username]" type="text" maxlength="30" class="form-control" value="<?php echo set_value('form[username]'); ?>" autofocus="on"/>
							<span class="help-block"><?php echo form_error('form[username]'); ?></span>
						</div>
					</div>
					<div class="form-group<?php echo form_error('form[password]') ? ' has-error' : ''; ?>">
						<label class="col-sm-3 control-label"><?php echo $this->lang->line('password'); ?>:</label>
						<div class="col-sm-9">
							<input name="form[password]" type="password" maxlength="30" class="form-control"/>
							<span class="help-block"><?php echo form_error('form[password]'); ?></span>
						</div>
					</div>
					<div class="form-group">
						<div class="form-actions">
							<div class="col-sm-9 col-sm-offset-3">
								<button type="submit" class="btn btn-danger"><i class="glyphicon glyphicon-user"></i> <?php echo $this->lang->line('login'); ?></button>
							</div>
						</div>
					</div>
				</form>
			</div>
		</div>

		<div class="col-md-7">
			<p>Tisigram 2016 adalah <a href="http://en.wikipedia.org/wiki/Competitive_programming">kompetisi pemrograman</a> yang
			diadakan oleh Himpunan Mahasiswa Komputer Politeknik Negeri Bandung bagi mahasiswa Politeknik Negeri Bandung dan
			anggota Asosiasi Mahasiswa Informatika (AMIF) se-Bandung Raya.</p>

			<p>Kompetisi pemrograman ini melatih kemampuan pemrograman dasar, logika, matematika, dan <i>problem solving</i>.
			Kompetisi ini diikuti secara individu menggunakan skema penilaian ACM-ICPC.</p>

			<div class="panel panel-default">
				<div class="panel-body" role="tabpanel">
					<ul class="nav nav-tabs" role="tablist" style="margin-bottom: 20px">
						<li role="presentation" class="active">
							<a href="#schedule" aria-controls="schedule" role="tab" data-toggle="tab"><i class="glyphicon glyphicon-calendar"></i> Jadwal</a>
						</li>
						<li role="presentation">
							<a href="#cluster" aria-controls="cluster" role="tab" data-toggle="tab"><i class="glyphicon glyphicon-th-list"></i> Cluster</a>
						</li>
						<li role="presentation">
							<a href="#scoreboard" aria-controls="scoreboard" role="tab" data-toggle="tab"><i class="glyphicon glyphicon-tasks"></i> Scoreboard</a>
						</li>
						<li role="presentation">
							<a href="#download" aria-controls="download" role="tab" data-toggle="tab"><i class="glyphicon glyphicon-download-alt"></i> Download</a>
						</li>
						<li role="presentation">
							<a href="#contact" aria-controls="contact" role="tab" data-toggle="tab"><i class="glyphicon glyphicon-envelope"></i> Hubungi Kami</a>
						</li>
					</ul>

					<div class="tab-content">
						<div role="tabpanel" class="tab-pane active" id="schedule">
							<!-- <p class="alert alert-success">
								On proses
							</p> -->
							<table class="table table-bordered">
								<thead>
									<tr>
										<th>Kegiatan</th>
										<th>Tanggal</th>
										<th>Waktu</th>
									</tr>
								</thead>
								<tbody>
									<tr>
										<td>Sesi Pembiasaan Sistem</td>
										<td colspan="2">Senin, 21 Maret 2016 &mdash; Minggu, 3 April 2016</td>
									</tr>
									<tr>
										<td>Pendaftaran Peserta (JTK)</td>
										<td colspan="2">Senin, 7 Maret 2016  &mdash; Jumat, 11 Maret 2016</td>
									</tr>
									<tr>
										<td>Technical Meeting Internal JTK</td>
										<td>Selasa, 15 Maret 2016</td>
										<td>Pukul 15.00 &mdash; 17.00 WIB</td>
									</tr>
									<tr>
										<td>Sesi Simulasi Kontes 1</td>
										<td>Jumat, 25 Maret 2016</td>
										<td>Pukul 13.00 &mdash; 18.00 WIB</td>
									</tr>
									<tr>
										<td>Pendaftaran Peserta (KEMA POLBAN dan AMIF)</td>
										<td colspan="2">Senin, 23 Maret 2016 &mdash; Minggu, 27 Maret 2016</td>
									</tr>
									<tr>
										<td>Technical Meeting untuk (KEMA POLBAN dan AMIF)</td>
										<td>Senin, 28 Maret 2016</td>
										<td>Pukul 15.00 &mdash; 17.00 WIB</td>
									</tr>
									<tr>
										<td>Sesi Simulasi Kontes 2</td>
										<td>Jumat, 1 April 2016</td>
										<td>Pukul 16.00 &mdash; 22.00 WIB</td>
									</tr>
									<tr>
										<td>Masa Tenang</td>
										<td>Senin, 4 April 2016</td>
										<td>Jumat, 8 April 2016</td>
									</tr>
									<tr>
										<td>Kompetisi (Onsite)</td>
										<td>Sabtu, 9 April 2016</td>
										<td>Pukul 07.00 &mdash; 17.00 WIB<br><small>(Mohon cek buku panduan di menu "Download")</small></td>
									</tr>
								</tbody>
							</table>
						</div> <!-- end jadwal -->
						<div role="tabpanel" class="tab-pane" id="cluster">
							<p>Mahasiswa tingkat 1 dan 2 di Jurusan Teknik Komputer dan Informatika dapat memilih
							cluster sesuai dengan kriteria minimal yang ditentukan berdasarkan nilai mata kuliah
							Dasar-dasar Pemrograman di semester 1.</p>
							<p>Mahasiswa dari jurusan lain di Politeknik Negeri Bandung dan anggota Asosiasi Mahasiswa Informatika (AMIF) hanya bisa memilih cluster 4.</p>
							<p>Aturan cluster bagi tingkat 1 dan 2 JTK adalah sebagai berikut:</p>
							<table class="table table-bordered">
								<thead>
									<tr>
										<th>Cluster</th>
										<th>Tingkat 1 JTK</th>
										<th>Tingkat 2 JTK</th>
										<th>Kema POLBAN dan AMIF</th>
									</tr>
								</thead>
								<tbody>
									<tr>
										<th>1</td>
										<td>CD &mdash; D</td>
										<td class="danger">Tidak dapat mendaftar</td>
										<td rowspan="3" class="danger">Tidak dapat mendaftar</td>
									</tr>
									<tr>
										<th>2</td>
										<td>BC &mdash; D</td>
										<td>CD &mdash; D</td>
									</tr>
									<tr>
										<th>3</td>
										<td>AB &mdash; D</td>
										<td>BC &mdash; D</td>
									</tr>
									<tr>
										<th>4</td>
										<td colspan="3">Semua dapat mendaftar</td>
									</tr>
								</tbody>
							</table>
						</div> <!-- end cluster -->
						<div role="tabpanel" class="tab-pane" id="scoreboard">
							<ul>
								<li>
									<a href="<?php echo base_url(); ?>index.php/scoreboard/view/1">Pembiasaan Sistem, Sesi 1</a>
								</li>
								<li>
									<a href="<?php echo base_url(); ?>index.php/scoreboard/view/3">Sesi Simulasi Kontes 1 <span class="label label-info">25 April, 13.00 s.d. 18.00 WIB</span></a>
								</li>
								<li>
									<a href="<?php echo base_url(); ?>index.php/scoreboard/view/4">Pembiasaan Sistem, Sesi 2</a>
								</li>
								<li>
									<a href="<?php echo base_url(); ?>index.php/scoreboard/view/6">Sesi Simulasi Kontes 2</a>
									<!-- <span class="label label-info">27 Maret, 23.59 WIB</span> -->
								</li>
								<!-- <li>
									<a href="<?php echo base_url(); ?>result/ts2016simulasi3.html">Sesi Simulasi Kontes 3</a>
									<span class="label label-info">8 April, 16.30 s.d. 22.30 WIB</span>
								</li>
								<li>
									<a href="<?php echo base_url(); ?>result/ts2016cluster1.html">Tisigram 2016 - Sesi 1 - Cluster 1</a>
									<span class="label label-info">11 April, 09.30 s.d. 12.00 WIB</span>
								</li>
								<li>
									<a href="<?php echo base_url(); ?>result/ts2016cluster2.html">Tisigram 2016 - Sesi 1 - Cluster 2</a>
									<span class="label label-info">11 April, 09.30 s.d. 12.00 WIB</span>
								</li>
								<li>
									<a href="<?php echo base_url(); ?>result/ts2016cluster3.html">Tisigram 2016 - Sesi 1 - Cluster 3</a>
									<span class="label label-info">11 April, 09.30 s.d. 12.00 WIB</span>
								</li>
								<li>
									<a href="<?php echo base_url(); ?>result/ts2016cluster4.html">Tisigram 2016 - Sesi 2 - Cluster 4</a>
									<span class="label label-info">11 April, 13.30 s.d. 16.00 WIB</span>
								</li> -->
							</ul> 
						</div> <!-- end scoreboard -->
						<div role="tabpanel" class="tab-pane" id="download">
							<ul>
								<li>
									<a href="http://tisigram.jtk.polban.ac.id/2016/files/PanduanPeserta_Tisigram2016_v1.4.pdf">Panduan Kompetisi Peserta Tisigram 2016</a>
									<span class="label label-info">6 Maret 2016</span>
								</li>
								<li>
									<a href="https://5876c0c2a1eec4fc768210c9f2cba75ec3b48f03-www.googledrive.com/host/0B6A97m7r9dpBNDRGTllDY01xdzQ/PanduanPeserta_Tisigram2016_v1.3.pdf">Panduan Pembiasaan Peserta Tisigram 2016</a>
									<span class="label label-info">29 Maret 2016</span>
								</li>
								<li>
									<a href="https://5876c0c2a1eec4fc768210c9f2cba75ec3b48f03-www.googledrive.com/host/0B6A97m7r9dpBNDRGTllDY01xdzQ/PanduanTeknis_Tisigram2016.pdf">Panduan Teknis Tisigram 2015</a>
									<span class="label label-info">29 Maret 2016</span>
								</li>
								<li>
									<a href="https://5876c0c2a1eec4fc768210c9f2cba75ec3b48f03-www.googledrive.com/host/0B6A97m7r9dpBNDRGTllDY01xdzQ/TM_28%20Maret%202016.pptx">Technical Meeting 28 Maret 2016 </a>
									<span class="label label-info">29 Maret 2016</span>
								</li>
							</ul>
						</div> <!-- end download -->
						<div role="tabpanel" class="tab-pane" id="contact">
							<p>Contact person:</p>
							<ul>
								<li>Yudi Mufti Fathulah - 0857 9343 4554</li>
								<li>Hilda Annisa - 0882 1801 1256</li>
								<li>Muhammad Saiful Islam - 0821 2772 2922</li>
							</ul>
							<p>
								<strong>Panitia Pelaksana Tisigram 2016<br>Himpunan Mahasiswa Komputer -
								Politeknik Negeri Bandung</strong><br>
								Ruang e-Library, Gedung Jurusan Teknik Komputer dan Informatika<br>
								Jl. Gegerkalong Hilir, Ds. Ciwaruga, Kotak Pos 6468 BDCD Bandung
							</p>
							<p>
								<strong>Support Forum:</strong><br>
								<a href="http://www.facebook.com/groups/tisigram2016/">http://www.facebook.com/groups/tisigram2016/</a>
							</p>
						</div> <!-- end contact -->
					</div>
				</div>
			</div>
		</div>
	</div>

	<!--<div class="row">
		<div class="col-md-5">
			<form class="form-horizontal" action="" method="post">
				<div class="form-group<?php echo form_error('form[username]') ? ' has-error' : ''; ?>">
					<label class="col-sm-1 control-label"><?php echo $this->lang->line('username'); ?>:</label>
					<div class="col-sm-4">
						<input name="form[username]" type="text" maxlength="30" class="form-control" value="<?php echo set_value('form[username]'); ?>" autofocus="on"/>
						<span class="help-block"><?php echo form_error('form[username]'); ?></span>
					</div>
				</div>
				<div class="form-group<?php echo form_error('form[password]') ? ' has-error' : ''; ?>">
					<label class="col-sm-1 control-label"><?php echo $this->lang->line('password'); ?>:</label>
					<div class="col-sm-4">
						<input name="form[password]" type="password" maxlength="30" class="form-control"/>
						<span class="help-block"><?php echo form_error('form[password]'); ?></span>
					</div>
				</div>
				<div class="form-actions col-sm-offset-1">
					<button type="submit" class="btn btn-danger col-sm-3"><i class="glyphicon glyphicon-user"></i> <?php echo $this->lang->line('login'); ?></button>
				</div>
			</form>
		</div>

		<div class="col-md-7">
			<form class="form-horizontal" action="" method="post">
				<div class="form-group<?php echo form_error('form[username]') ? ' has-error' : ''; ?>">
					<label class="col-sm-1 control-label"><?php echo $this->lang->line('username'); ?>:</label>
					<div class="col-sm-4">
						<input name="form[username]" type="text" maxlength="30" class="form-control" value="<?php echo set_value('form[username]'); ?>" autofocus="on"/>
						<span class="help-block"><?php echo form_error('form[username]'); ?></span>
					</div>
				</div>
				<div class="form-group<?php echo form_error('form[password]') ? ' has-error' : ''; ?>">
					<label class="col-sm-1 control-label"><?php echo $this->lang->line('password'); ?>:</label>
					<div class="col-sm-4">
						<input name="form[password]" type="password" maxlength="30" class="form-control"/>
						<span class="help-block"><?php echo form_error('form[password]'); ?></span>
					</div>
				</div>
				<div class="form-actions col-sm-offset-1">
					<button type="submit" class="btn btn-danger col-sm-3"><i class="glyphicon glyphicon-user"></i> <?php echo $this->lang->line('login'); ?></button>
				</div>
			</form>
		</div>
	</div>-->
</div>