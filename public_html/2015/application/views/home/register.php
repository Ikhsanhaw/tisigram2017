<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8"/>
	<meta name="author" content="Sabdaul Ulum :)" />
	<meta name="description" content="Web Tisigram 2017 Himakom">
	<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">
	<title>Tisigram | Himakom</title>

	<link href="<?php echo base_url(); ?>assets/register/css/bootstrap.min.css" rel="stylesheet">
	<link href="<?php echo base_url(); ?>assets/register/css/ionicons.min.css" rel="stylesheet">
	<link href="<?php echo base_url(); ?>assets/register/css/pe-icon-7-stroke.css" rel="stylesheet">
	<link href="<?php echo base_url(); ?>assets/register/css/logoiconfont.css" rel="stylesheet">
	<link href="<?php echo base_url(); ?>assets/register/css/style.css" rel="stylesheet" title="main-css">	
	<link rel="stylesheet" type="text/css" href="<?php echo base_url(); ?>assets/register/css/colors/blue.css" title="blue">

	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/jquery.min.js"></script>

</head>
<body data-spy="scroll" data-target=".navbar" data-offset="70">
	<!-- Begin Header -->
	<header>
		<!-- Begin Navigation -->
		<nav class="navbar navbar-default navbar-fixed-top">
			<div class="container-fluid">
				<div class="row">
					<!-- Brand and toggle get grouped for better mobile display -->
					<div class="navbar-header">
						<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1" aria-expanded="false">
							<span class="sr-only">Toggle navigation</span>
							<span class="icon-bar"></span>
							<span class="icon-bar"></span>
							<span class="icon-bar"></span>
						</button>
						<a class="navbar-brand scroll-link" href="#home" data-id="home"><label style="color: #fff;line-height: 2.2;">Tisigram2017</label></a>
					</div>

					<!-- Collect the nav links, forms, and other content for toggling -->
					<div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
						<ul class="nav navbar-nav navbar-right">
							<li><a href="#home" data-id="home" class="scroll-link">Home</a></li>
							<li><a href="#timeline" data-id="timeline" class="scroll-link">Timeline</a></li>
							<li><a href="#contact" data-id="contact" class="scroll-link">Contact</a></li>
							<li><a href="<?php echo base_url();?>index.php/site/login">Login</a></li>
						</ul>
					</div><!-- /.navbar-collapse -->
				</div>
			</div><!-- /.container-fluid -->
		</nav>
		<!-- End Navigation -->
	</header>
	<!-- End Header -->

	<!-- Begin Jumbotron -->
	<div id="home" class="jumbotron jumbotron-register">
		<div id="particles-js"></div><!-- /.particles div -->
		<div class="container center-vertically-holder">
			<div class="center-vertically">
				<div class="col-sm-7 col-lg-6 mt40-xs">
					<h1 class="mb30 no-margin-top scaleReveal">
						<strong>Tisigram 2017</strong>
					</h1>
					<p class="bottomReveal">
						Adalah ajang kompetisi pemrograman se Bandung Raya yang akan mengasah skill competitive programmingmu. <br>
						Jadilah bagian dari acara ini untuk memperebutkan title juara!
					</p>
					<p class="mb30 bottomReveal">
						Untuk panduan bisa di unduh <a href="#"><b>disini</b></a>
					</p>
				</div>

				<div class="col-sm-5 col-lg-5 col-lg-offset-1 mt40-xs">
					<form role="form" id="register_form" class="register-form mb40-xs">
                        <h3 class="no-margin-top mb20">Registrasi sekarang!</h3>
                        <div class="form-group">
                            <input type="text" class="form-control" name="nim" placeholder="NIM" required="required">
                        </div>
                        <div class="form-group">
                            <input type="text" class="form-control" name="nama" placeholder="Nama Lengkap" required="required">
                        </div>
                        <div class="form-group">
                            <input type="text" class="form-control" name="telp" placeholder="No. Telp" required="required">
                        </div>
                        <div class="form-group">
                            <input type="text" class="form-control" name="email" placeholder="Email" required="required">
                        </div>
                        <div class="form-group">
                            <input type="text" class="form-control" name="institusi" placeholder="Institusi" required="required">
                        </div>
                        <div class="form-group no-margin-bottom mt20">
                            <button type="submit" class="btn btn-primary">Register</button>
                        </div>
                    </form>
				</div><!-- /.column -->
			</div><!-- /.vertical center -->
		</div><!-- /.container -->
	</div>
	<!-- End Jumbotron -->

	<!-- Begin Timeline -->
	<section id="timeline" class="background1 section-padding-top" style="background-color: white">
		<div class="container">
			<div class="row">
				<div class="col-xs-12 section-title text-center">
					<h2 style="color: black">Timeline</h2>
					<span class="section-divider"></span>
				</div><!-- /.column -->
			</div><!-- /.row -->
			<div class="row">
				<div class="col-lg-12">
					<ul class="timeline pb80">

						<!-- Item 1 -->
						<li>
							<div class="timeline-image scaleReveal"><img alt="" class="img-circle img-responsive" src="<?php echo base_url(); ?>assets/register/images/timeline-1.jpg"></div>
							<div class="timeline-panel leftReveal">
								<div class="timeline-heading">
									<h5 class="heading-1 mb15">3 April 2017</h5>
									<h4 class="subheading">Registrasi</h4>
								</div>
							</div>
						</li>

						<!-- Item 2 -->
						<li class="timeline-inverted">
							<div class="timeline-image scaleReveal"><img alt="" class="img-circle img-responsive" src="<?php echo base_url(); ?>assets/register/images/timeline-2.jpg"></div>
							<div class="timeline-panel rightReveal">
								<div class="timeline-heading">
									<h5 class="heading-1 mb15">29 April 2017</h5>
									<h4 class="subheading">Penyisihan</h4>
								</div>
							</div>
						</li>

						<!-- Item 3 -->
						<li>
							<div class="timeline-image scaleReveal"><img alt="" class="img-circle img-responsive" src="<?php echo base_url(); ?>assets/register/images/timeline-3.jpg"></div>
							<div class="timeline-panel leftReveal">
								<div class="timeline-heading">
									<h5 class="heading-1 mb15">7 Mei 2017</h5>
									<h4 class="subheading">Babak Final</h4>
								</div>
							</div>
						</li>
					</ul>
				</div><!-- /.column -->
			</div><!-- /.row -->
		</div><!-- /.container -->
	</section><!-- /.section -->
	<!-- End Timeline -->

	<!-- Begin Contact -->
	<section id="contact" class="background2 section-padding">
		<div class="container">
			<div class="row mb30">
				<div class="col-sm-10 col-sm-offset-1 col-md-8 col-md-offset-2 col-lg-6 col-lg-offset-3 section-title text-center">
					<h2>Contact</h2>
					<span class="section-divider mb15"></span>
				</div><!-- /.column -->
			</div><!-- /.row -->
			<div class="row">
				<div class="col-sm-12 mt30-xs">
					<form data-toggle="validator" id="contactForm" name="contactForm">
						<div class="row">
							<div class="col-sm-6">
								<div class="form-group">
									<div class="controls">
										<input class="form-control" data-error="This section is required."
										id="msg_subject" placeholder="Subject *" required="" type="text">
										<div class="help-block with-errors"></div>
									</div>
								</div>
							</div><!-- /.column -->
							<div class="col-sm-6">
								<div class="form-group">
									<div class="controls">
										<input class="form-control" id="phone" placeholder="Phone" type="text">
									</div>
								</div>
							</div><!-- /.column -->
						</div><!-- /.row -->
						<div class="row mb10">
							<div class="col-sm-6">
								<div class="form-group">
									<div class="controls">
										<input class="form-control" data-error="This section is required." id="name" placeholder="Your Name *" required="" type="text">
										<div class="help-block with-errors"></div>
									</div>
								</div>
							</div><!-- /.column -->
							<div class="col-sm-6">
								<div class="form-group">
									<div class="controls">
										<input class="email form-control" data-error="This section is required." id="email" placeholder="Email *" required="" type="email">
										<div class="help-block with-errors"></div>
									</div>
								</div>
							</div><!-- /.column -->
						</div><!-- /.row -->
						<div class="row">
							<div class="col-sm-12">
								<div class="form-group">
									<div class="controls">
										<textarea class="form-control" data-error="This section is required." id="message" placeholder="Message *" required="" rows="5"></textarea>
										<div class="help-block with-errors"></div>
									</div>
								</div>
							</div>
						</div>
						<div class="row mt15">
							<div class="col-sm-6">
								<div id="msgSubmit" class="h4 hidden mt10 no-margin-bottom"></div> 
							</div><!-- /.column -->
							<div class="col-sm-6 text-right">
								<button type="submit" id="submit" class="btn btn-default btn-lg">Send</button>
							</div><!-- /.column -->
						</div><!-- /.row -->
					</form><!-- /.form -->
				</div><!-- /.column -->
			</div><!-- /.row -->
		</div><!-- /.container -->
	</section><!-- /.section -->
	<!-- End Contact -->

	<!-- Begin Diselenggarakan -->
	<section class="background1 section-padding">
		<div class="container">
			<div class="row mb30">
				<div class="col-lg-6 col-lg-offset-3 section-title text-center">
					<h2 style="line-height: 1;">Kegiatan ini diselenggarakan oleh :</h2>
					<span class="section-divider mb15"></span>
				</div><!-- /.column -->
			</div><!-- /.row -->
			<div class="row mb50">
				<div class="col-lg-8 col-lg-offset-2 text-center">
					<img src="<?php echo base_url(); ?>assets/register/images/himakom.png" alt="Himakom" width="150px" height="150px">
				</div><!-- /.column -->
			</div><!-- /.row -->
		</div><!-- /.container -->
	</section><!-- /.section -->
	<!-- End Diselenggarakan -->

	<!-- Begin Map -->
	<div id="map"></div>
	<!-- End Map -->

	<!-- Begin Footer -->
	<footer class="background1 footer-padding">
		<div class="container">
			<div class="row mb30">

				<!-- Social -->
				<div class="col-sm-6 mt30-xs">
					<h5 class="heading-1 mb20">Social</h5>
					<ul class="list-inline social-buttons">
                        <li><a href="#"><i class="ion-social-twitter"></i></a></li>
                        <li><a href="#"><i class="ion-social-facebook"></i></a></li>
                        <li><a href="#"><i class="ion-social-instagram-outline"></i></a></li>
                        <li><a href="#"><i class="ion-social-youtube"></i></a></li>
                    </ul>
				</div><!-- /.column -->

				<!-- Contact -->
				<div class="col-sm-6 mt30-xs">
					<h5 class="heading-1 mb20">Contact Us</h5>
					<h5 class="mb15" style="font-weight: 100;
    color: #fff;">Jl. Gegerkalong Hilir, Ciwaruga, Parongpong, Kabupaten Bandung Barat, Jawa Barat 40559</h5>
					<p class="text-xs-small mb5"><strong class="text-switch">Email:</strong> ridwan.fathin.tif15@polban.ac.id</p>
					<p class="text-xs-small mb5"><strong class="text-switch">Line:</strong> @ajz9852x</p>
					<p class="text-xs-small mb5"><strong class="text-switch">CP:</strong> fathinridwan</p>
				</div><!-- /.column -->
			</div>

			<div class="row">
				<div class="col-sm-8 col-sm-offset-2 text-small text-center">
					<hr>
					<button type="button" class="btn btn-primary btn-up-footer btn-lg scroll-top">Up</button>
					<p class="no-margin">&copy; 2017</p>
				</div><!-- /.column -->
			</div><!-- /.row -->
		</div><!-- /.container -->
	</footer><!-- /.footer -->
	<!-- Begin Footer -->

	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/bootstrap.min.js"></script>
	<script src="https://maps.googleapis.com/maps/api/js?key=AIzaSyArLNT3t4qsJEBmR0R9P_6ueLIQz0Jvt1M&amp;callback=initMap" async defer></script>
    <script type="text/javascript">
		/* ---- Google Maps ---- */
        function initMap() {
            var mapOptions = {
                zoom: 16,
				zoomControl: false,
				scaleControl: false,
				scrollwheel: false,
				disableDoubleClickZoom: true,
                center: new google.maps.LatLng(-6.8705316,107.5715406), // New York
            };
            var mapElement = document.getElementById('map');
            var map = new google.maps.Map(mapElement, mapOptions);
            var marker = new google.maps.Marker({
                position: new google.maps.LatLng(-6.8705316,107.5715406),
                map: map,
                title: 'Gedung JTK!'
            });
        }
    </script>
	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/particles.min.js"></script>
	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/particlesRun.js"></script>
	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/jquery.mixitup.js"></script>
	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/form-validator.min.js"></script>
	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/scrollreveal.min.js"></script>
	<script type="text/javascript" src="<?php echo base_url(); ?>assets/register/js/main.js"></script>
</body>
</html>
