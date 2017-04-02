<?php $version = '7'; if (isset($_GET['get']) && $_GET['get'] == 'v') die($version); ?>

<!DOCTYPE html>
<html lang="id">

<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
	
	<link type="text/css" href="assets/vendor/bootstrap/dist/css/bootstrap.min.css" rel="stylesheet"/>
	<link type="text/css" href="assets/css/style.css" rel="stylesheet"/>
	<link rel="shortcut icon" href="files/favicon.ico">
	<script type="text/javascript" src="assets/vendor/jquery/dist/jquery.min.js"></script>
	<script type="text/javascript" src="assets/vendor/bootstrap/dist/js/bootstrap.min.js"></script>
	<script type="text/javascript" src="assets/js/jquery.knob.min.js"></script>
	<title>Official Countdown Timer | Tisigram 2016</title>
</head>

<body>

<div class="container">

	<?php if (!isset($_GET['id'])) { ?>

	<ul>
		<!--<li><a href="scoreboard.php?id=13">Pemanasan</a></li>-->
		<li><a href="scoreboard.php?id=8">Cluster 1</a></li>
		<li><a href="scoreboard.php?id=9">Cluster 2</a></li>
		<li><a href="scoreboard.php?id=10">Cluster 3</a></li>
		<li><a href="scoreboard.php?id=11">Cluster 4</a></li>
	</ul>

	<?php } else {

	$db = new mysqli('localhost', 'tisigram', 'birukandunia', 'tisigram_2016');
	$result = $db->query("SELECT * FROM `contest` WHERE `id` = " . $_GET['id']);
	$row = $result->fetch_assoc();

	?>

	<div class="row">
		<div class="col-md-12">
			<ul class="nav nav-pills">
				<!--<li><a href="scoreboard.php?id=13">Pemanasan</a></li>-->
				<li><a href="scoreboard.php?id=8">Cluster 1</a></li>
				<li><a href="scoreboard.php?id=9">Cluster 2</a></li>
				<li><a href="scoreboard.php?id=10">Cluster 3</a></li>
				<li><a href="scoreboard.php?id=11">Cluster 4</a></li>
			</ul>
			<h1 align="center"><?php echo $row['name']; ?></h1>
			<p align="center">
				<input type="text" value="0" class="dial" id="clockHH" data-fgColor="#000000" data-min="0" data-max="3">
				<input type="text" value="0" class="dial" id="clockMM" data-fgColor="#000000" data-min="0" data-max="59">
				<input type="text" value="0" class="dial" id="clockSS" data-fgColor="#000000" data-min="0" data-max="59">
			</p>

			<h2 id="displayInfo" align="center">Official Countdown Timer</h1>
		</div>
	</div>
	<div class="row">
		<div class="col-md-12">
			<div id="scoreboard"></div>
		</div>
	</div>

	<script type="text/javascript">
	var ongoingContest = true;
	var html;

	$(document).ready(function(){
		$(".dial").knob({
			'font': 'Segoe UI Light',
			'width': 150,
			'height': 150,
			'readOnly': true
		});

		set_clock(new Date(<?php echo time() * 1000; ?>),
			      new Date(<?php echo strtotime($row['start_time']) * 1000; ?>),
			      new Date(<?php echo strtotime($row['freeze_time']) * 1000; ?>),
			      new Date(<?php echo strtotime($row['end_time']) * 1000; ?>));
		<!-- <?php echo $row['start_time']; echo $row['freeze_time']; echo $row['end_time']; ?>-->
		refresh_scoreboard();
	});

	function refresh_scoreboard() {
		$.get("http://tisigram.jtk.polban.ac.id/2016/index.php/scoreboard/view/<?php echo $_GET['id']; ?>", function(val) {
			$('#scoreboard').html($(val).find('table'));

			if (ongoingContest == true) setTimeout(function(){refresh_scoreboard();}, 500);
		});
	}

	function set_clock(serverTime, startTime, freezeTime, endTime) {
		var curTime = new Date();
		var diffTime = serverTime - curTime;
		update_clock(diffTime, startTime, freezeTime, endTime);
	}

	function update_clock(diffTime, startTime, freezeTime, endTime) {
		var curTime = new Date();
		curTime.setTime(curTime.getTime() + diffTime);

		var displayTime;
		var displayInfo;
		var diff;
		if (curTime < startTime) { // kontes belum mulai
			diff = startTime.getTime() - curTime.getTime();
			displayInfo = "sebelum kompetisi dimulai";
			ongoingContest = false;
		} else if (curTime >= endTime) { // kontes sudah selesai
			diff = 0;
			displayInfo = "Kompetisi sudah berakhir";
			
			if (ongoingContest == true) {
				ongoingContest = false;
				$('#scoreboard').hide(5000);
			}
		} else { // kontes sedang berlangsung
			diff = endTime.getTime() - curTime.getTime();
			displayInfo = "Kompetisi sedang berlangsung";

			if (curTime >= freezeTime) {
				displayInfo = "Scoreboard di-freeze";
			}

			displayInfo += ", " + $('#scoreboard').find('table').find('.scoreboard-accepted-td').length + " AC, ";
			displayInfo += $('#scoreboard').find('table').find('.scoreboard-not-accepted-td').length + " WA";

			if (ongoingContest == false) {
				ongoingContest = true;
				$('#scoreboard').show(5000);
			}
		}

		var curHour = Math.floor(diff / 3600000);
		diff %= 3600000;
		var curMinute = Math.floor(diff /  60000);
		diff %= 60000;
		var curSecond = Math.floor(diff / 1000);

		$('#clockHH').val(curHour).trigger('change');
		$('#clockMM').val(curMinute).trigger('change');
		$('#clockSS').val(curSecond).trigger('change');

		if (curHour < 10) curHour = '0' + curHour;
		if (curMinute < 10) curMinute = '0' + curMinute;
		if (curSecond < 10) curSecond = '0' + curSecond;
		displayTime = curHour + ':' + curMinute + ':' + curSecond;

		$('#counter').html(displayTime);
		$('#displayInfo').html(displayInfo);

		setTimeout(function(){update_clock(diffTime, startTime, freezeTime, endTime);}, 500);
	}
</script>

	<?php } ?>

	<div class="row">
		<div class="site_footer text-center">
			<hr />
			&copy; 2012-2015 Regrader. Powered by CodeIgniter, Bootstrap, and Moe Contest Environment. Licensed under MIT License.
						<a href="http://www.ucw.cz/moe/">Moe Contest Environment</a>. Licensed under GPLv3.<br><br>
			Sponsored by:<br><br>
			<a href="https://veritrans.co.id/"><img src="http://tisigram.jtk.polban.ac.id/2016/files/VeritransLogo.png" height="50" /></a>
			<a href="http://belant.net/"><img src="http://tisigram.jtk.polban.ac.id/2016/files/belant-logo.png" height="75" style="margin: 0 0 0 35px" /></a>
			<br>
			<a href="http://ciptadrasoft.com/"><img src="http://tisigram.jtk.polban.ac.id/2016/files/ciptadrasoft.jpg" height="100" /></a>
			<a href="http://ptbsp.com/"><img src="http://tisigram.jtk.polban.ac.id/2016/files/sponsor_bsp.png" height="50" style="margin: 0 25px 0 25px" /></a>
			<a href="http://www.karismatech.com/"><img src="http://tisigram.jtk.polban.ac.id/2016/files/logo-karismatech.png" height="40" /></a>
		</div>
	</div>

	<script type="text/javascript">
	var version = "<?php echo $version; ?>";

	function check_version() {
		$.get('scoreboard.php?get=v', function(val) {
			if (val !== version) {
				document.location.reload(true);
			} else {
				setTimeout(function(){check_version();}, 2000);
			}
		});
	}

	$(document).ready(function(){
		check_version();
	});
	</script>

</div>

</body>
</html>
