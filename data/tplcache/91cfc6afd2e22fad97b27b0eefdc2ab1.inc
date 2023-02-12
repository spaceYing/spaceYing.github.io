<div class="container">
	<div class="row">
		<div class="col-xs-12 col-sm-12 col-md-12">
			<div class="news_head" data-move-y="-40px">
				<h2>{dede:field name='typename'/}</h2>
				<span></span>
				<p>{dede:field name='description'/}</p>
			</div>
			<div class="col-xs-12 col-sm-12 col-md-12">
				<div class="col-sm-12 col-md-5 news_img" data-move-x="-100px" style="background-image: url(/skin/images/news.jpg);">
				</div>
				<div class="col-xs-12 col-sm-12 col-md-7 news_text" data-move-y="150px">
					<ul class="news_index">
						{dede:arclist typeid='' row='4' titlelen='60' orderby='pubdate'}
						<li>
						<span>
						<strong>[field:pubdate function="MyDate('d',@me)"/]</strong>
						<i>[field:pubdate function="MyDate('Y-m',@me)"/]</i>
						</span>
						<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><br>
						<em>[field:description function="cn_substr(@me,120)"/]...</em>
						</li>
						{/dede:arclist}
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>