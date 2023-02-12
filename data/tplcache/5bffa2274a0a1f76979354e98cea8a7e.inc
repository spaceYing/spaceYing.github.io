<div class="container">
	<div class="row">
		<div class="product_head" data-move-y="-40px">
			<h2>{dede:field name='typename'/}</h2>
			<p>{dede:field name='description'/}</p>
		</div>
		<div class="col-xs-12 col-sm-3 col-md-3">
			<div class="left_nav" data-move-y="-30px">
				<div class="left_nav_bg">
					<ul class="left_nav_ul" id="firstpane">
						{dede:channel typeid='5' noself='yes' }
						<li><a class="biglink" href='[field:typelink/]'>[field:typename/]</a></li>
						{/dede:channel}						
					</ul>
					<div class="left_nav_tel">{dede:global.cfg_tel/}</div>
				</div>
			</div>
		</div>
		<div class="col-xs-12 col-sm-9 col-md-9">
			<div class="product_list">
				{dede:arclist typeid='' row='6' titlelen='50' orderby='pubdate'}
				<div class="col-sm-4 col-md-4 col-mm-6 case_img" data-move-y="50px">
					<a href="[field:arcurl/]"><img src="[field:litpic/]" class="opacity_img" alt="[field:title/]"/></a>
					<p class="case_title">
						<a href="[field:arcurl/]">[field:title/]</a>
					</p>
				</div>
				{/dede:arclist}

			</div>
		</div>
	</div>
</div>