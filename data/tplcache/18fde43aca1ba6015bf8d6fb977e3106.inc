<div class="case_bg">
	<div class="container">
		<div class="row">
			<div class="col-xs-12 col-sm-12 col-md-12">
				<div class="product_head" data-move-y="-40px">
					<h2>{dede:field name='typename'/}</h2>
					<span></span>
					<p>{dede:field name='description'/}</p>
				</div>
				<div class="case_list">
					{dede:arclist typeid='' row='4' titlelen='50' orderby='pubdate'}
					<div class="col-sm-4 col-md-3 col-mm-6 case_img" data-move-y="50px">
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
</div>