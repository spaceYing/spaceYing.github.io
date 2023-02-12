<div class="news_bg" style="background:#F5F5F5;">
	<div class="container">
		<div class="row">
			<div class="col-xs-12 col-sm-12 col-md-12">
				<div class="product_index">
					<div class="product_head" data-move-y="-40px">
						<h2>{dede:field name='typename'/}</h2>
						<p>{dede:field name='typenameen'/}</p>
					</div>
					<div class="news_listd" data-move-y="-40px">
						<div class="col-xs-12 col-sm-6 col-md-6 ">
							<ul class="news_index">
								{dede:arclist typeid='' row='4' titlelen='60' orderby='pubdate'}
								<li>
								<span>
								<strong>[field:pubdate function="MyDate('d',@me)"/]</strong>
								<i>[field:pubdate function="MyDate('Y-m',@me)"/]</i>
								</span>
								<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><br>
								<em>[field:description function="cn_substr(@me,100)"/]...</em>
								</li>
								{/dede:arclist}
							</ul>
						</div>
						<div class="col-xs-12 col-sm-6 col-md-6">
							<div class="col-sm-12 col-md-5 news_img" data-move-x="-100px" style="background-image: url(/skin/images/news.jpg);">
							</div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</div>