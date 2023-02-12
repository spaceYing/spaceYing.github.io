<div class="g-blk-case f-oh">
		<div class="g-w1000">
			<div class="m-hds f-tac animated fadeInUp">
				<h3>{dede:field name='typename'/}</h3>
				<p>{dede:field name='description'/}</p>
			</div>
			<a href="javascript:void(0)" class="btn prev animated bounceInLeft" style="z-index:999;"></a>
			<div class="case">
				<ul>
					{dede:arclist row='3' titlelen='50' orderby='pubdate'}
					<li class="animated flipInX" style="width:auto"><a href="[field:arcurl/]" title="[field:title/]" target="_blank"><img src="[field:litpic/]" width="320" height="240" alt="[field:title/]"/>
					<p>[field:title/]</p>
					</a></li>
					{/dede:arclist}
				</ul>
			</div>
			<a href="javascript:void(0)" class="btn next animated bounceInRight" style="z-index:999;"></a>
		</div>
	</div>