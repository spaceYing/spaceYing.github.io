<div class="news_bg">
	<div class="container">
		<div class="row">
			<div class="col-xs-12 col-sm-12 col-md-12">
				<div class="product_head" data-move-y="-40px">
					<h2>{dede:field name='typename'/}</h2>
					<p>{dede:field name='description'/}</p>
				</div>
				<ul class="news_index" data-move-y="200px">
					{dede:arclist typeid='' row='6' titlelen='50' orderby='pubdate'}
					<div class="col-sm-6 col-md-6 news_col">
						<li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><span class='news_time2'><strong>[field:pubdate function="MyDate('d',@me)"/]</strong><i>[field:pubdate function="MyDate('Y-m',@me)"/]</i></span><br>
						<em class='news_time2'> [field:description function="cn_substr(@me,120)"/]...</em></li>
					</div>
					{/dede:arclist}
				</ul>
			</div>
		</div>
	</div>
</div>