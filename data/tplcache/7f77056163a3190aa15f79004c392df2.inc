<div class="sevices_bg" style="background-image: url(/skin/images/1556358453.jpg); background-size: cover;background-attachment: fixed;background-color: #1A1A1A;">
	<div class="container">
		<div class="row">
			<div class="col-xs-12 col-sm-12 col-md-12">
				<div class="case_head" data-move-y="-40px">
					<h2>{dede:field name='typename'/}</h2>
					<span></span>
					<p>{dede:field name='description'/}</p>
				</div>
				<div class="case_list">
					{dede:arclist typeid='' row='6' titlelen='50' orderby='pubdate'}
					<div class="col-sm-4 col-md-4 col-mm-6 product_img" data-move-y="50px">
						<div class="page_img" data-move-y="50px">
							<a href="[field:arcurl/]">
							<img src="[field:litpic/]" class="opacity_img" alt="[field:title/]">
							</a>
							<p class="product_title">
								<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
							</p>
						</div>
					</div>
					{/dede:arclist}

				</div>
			</div>
		</div>
	</div>
</div>