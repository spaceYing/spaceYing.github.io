<div class="container">
	<div class="row">
		<div class="col-xs-12 col-sm-12 col-md-12 about_us">
			<div class="col-xs-12 col-sm-6 col-md-6 " data-move-y="-40px">
				<h3 class="about_h3">{dede:field name='typenameen'/}</h3>
				<p class="about_p">{dede:field name='seotitle'/}</p>
				<div class="about_content">
					 {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),550)'/]
        {/dede:sql}...
				</div>
				<a href="{dede:field name='typeurl'/}" class="about_btn">了解更多</a>
			</div>
			<div class="col-xs-12 col-sm-6 col-md-6 js_about_right" data-move-y="40px">
				<video class="about_video" poster="" controls>
					<source src="/skin/images/video.mp4" type="video/mp4">
				</video>
			</div>
		</div>
	</div>
</div>