<div class="container">
	<div class="row">
		<div class="col-md-12 site_footer text-center">
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
</div>



<script type="text/javascript">
	$(document).ready(function(){
		set_server_clock(new Date(<?php echo time() * 1000; ?>));
	});
</script>

<?php if (isset($active_contest_end_time)) : ?>

<script type="text/javascript">
	$(document).ready(function(){
		set_contest_clock(new Date(<?php echo time() * 1000; ?>),
			              new Date(<?php echo strtotime($active_contest_end_time) * 1000; ?>));
	});
</script>

<?php endif; ?>

</body>

</html>
