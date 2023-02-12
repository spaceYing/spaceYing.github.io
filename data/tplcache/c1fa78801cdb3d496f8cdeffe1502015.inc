<div class="col-l wow fadeInUp" data-wow-duration="1s" data-wow-delay=".1s">
        <div class="g-tit-2">
          <a href="{dede:field name='typeurl'/}" class="more">更多+</a>
          <span>{dede:field name='typename'/}</span><em>{dede:field name='typenameen'/}</em> </div>
        <div class="pic"><img src="{dede:field name='typeimg'/}" alt="{dede:field name='typename'/}"></div>
        <div class="myscroll">
          <ul class="ul-news">
            {dede:arclist typeid='' row='10' titlelen='60' orderby='pubdate'}
			<li><a href="[field:arcurl/]"  title="[field:title/]"><span>【[field:typename/]】</span>[field:title/]</a></li>
			{/dede:arclist}
          </ul>
        </div>
      </div>