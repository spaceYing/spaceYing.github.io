<div class="container">
	<div class="row">
		<div class="col-xs-12 col-sm-12 col-md-12">
			<div class="product_index">
				<div class="product_head" data-move-y="-40px">
					<h2>{dede:field name='typename'/}</h2>
					<p>{dede:field name='typenameen'/}</p>
				</div>
				<div class="product_list">
					{dede:arclist typeid='' row='4' titlelen='50' orderby='pubdate'}
					<div class="col-sm-4 col-md-3 col-mm-6 product_img">
						<a href="[field:arcurl/]"><img src="[field:litpic/]" class="img-thumbnail" alt="[field:title/]"/></a>
						<p class="product_title">
							<a href="[field:arcurl/]">[field:title/]</a>
						</p>
					</div>
					{/dede:arclist}

				</div>
			</div>
		</div>
	</div>
</div>