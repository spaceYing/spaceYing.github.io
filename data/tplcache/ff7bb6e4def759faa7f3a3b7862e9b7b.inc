<div class="floor_5">
      <div class="in_title">
        <h3 class="tit"><em class="line fl"></em><span class="word">{dede:field name='typename'/}</span><em class="line fr"></em></h3>
      </div>
      <!--新闻分类开始-->
      <div class="tab">  {dede:channel type='son' noself='yes'}<a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a>  {/dede:channel}</div>
      <!--新闻分类结束-->
      <div class="thumblist">
        <ul class="list">
          {dede:arclist typeid='' row='5' titlelen='50' orderby='pubdate'}
		  <li><a href="view.php?aid=[field:id/]" title="[field:title/]">
            <figure><img src="[field:litpic/]" alt="[field:title/]"/></figure>
            <h3 >[field:title/]</h3>
            <p>[field:description function="cn_substr(@me,150)"/]...</p>
            <span>[查看详情]</span></a></li>
			{/dede:arclist}
        </ul>
      </div>
      <a class="look_more" href="list.php?tid={dede:field name='id'/}" title="查看更多>">查看更多>></a></div>