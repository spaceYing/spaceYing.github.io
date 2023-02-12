<div class="col-r wow fadeInUp" data-wow-duration="1s" data-wow-delay=".1s">
        <div class="g-tit-2">
          <a href="{dede:field name='typeimg'/}" class="more">更多+</a>
          <span>{dede:field name='typename'/}</span><em>{dede:field name='typenameen'/}</em> </div>
        <ul class="ul-ask">
			{dede:arclist typeid='' row='10' titlelen='60' orderby='pubdate'}
			<li>
              <h5><span>问</span>：[field:title/]</h5>
              <p><span>答：</span>[field:description function="cn_substr(@me,300)"/]... </p>
            </li>
			{/dede:arclist}
        </ul>
      </div>