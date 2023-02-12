<div class="a4 w1204">
	<div class="a_t">
		<span>{dede:field name='typename'/}</span>{dede:field name='typenameen'/}
	</div>
	<div class="c2a1">
		<div class="tabli1">
			<ul class="c2a_ul">
				{dede:channel type='son' noself='yes'}<li>[field:typename/]</li>{/dede:channel}
			</ul>
		</div>
	</div>
	<div class="c2b1">
		<div class="tab1">
			<div class="a4_1">
				{dede:arclist limit='0,2' typeid='13' titlelen='60' orderby='pubdate'}
				<div class="a4_t">
					<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
				</div>
				<div class="a4_d">
					<dd>[field:description function="cn_substr(@me,300)"/]...</dd>
				</div>
				{/dede:arclist}

			</div>
			<ul class="a4_ul2">
				{dede:arclist limit='2,7' typeid='13' titlelen='60' orderby='pubdate'}
				<li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><span>2018-08-18</span></li>
				{/dede:arclist}
			</ul>
		</div><div class="tab1">
			<div class="a4_1">
				{dede:arclist limit='0,2' typeid='14' titlelen='60' orderby='pubdate'}
				<div class="a4_t">
					<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
				</div>
				<div class="a4_d">
					<dd>[field:description function="cn_substr(@me,300)"/]...</dd>
				</div>
				{/dede:arclist}

			</div>
			<ul class="a4_ul2">
				{dede:arclist limit='2,7' typeid='14' titlelen='60' orderby='pubdate'}
				<li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><span>2018-08-18</span></li>
				{/dede:arclist}

			</ul>
		</div><div class="tab1">
			<div class="a4_1">
				{dede:arclist limit='0,2' typeid='23' titlelen='60' orderby='pubdate'}
				<div class="a4_t">
					<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
				</div>
				<div class="a4_d">
					<dd>[field:description function="cn_substr(@me,300)"/]...</dd>
				</div>
				{/dede:arclist}

			</div>
			<ul class="a4_ul2">
				{dede:arclist limit='2,7' typeid='23' titlelen='60' orderby='pubdate'}
				<li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><span>2018-08-18</span></li>
				{/dede:arclist}

			</ul>
		</div>
	</div>
	<script>$(".tabli1 li").eq(0).addClass("cur"),$(".tab1").eq(0).show(),$(".tabli1 li").hover(function(){$(this).addClass("cur").siblings().removeClass("cur");var s=$(this).index();$(".tab1").eq(s).show().siblings(".tab1").hide()})</script>
	<a href="{dede:field name='typeurl'/}" class="a4_more">了解一下</a>
</div>