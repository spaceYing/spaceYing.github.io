<section id="floor_5_main">
    <div class="floor_5">
      <div class="in_title">
        <p class="entit">{dede:field name='typenameen'/}</p>
        <h3 class="tit"><em class="line"></em><span class="word">{dede:field name='typename'/}</span><em class="line"></em></h3>
      </div>
      <!--新闻分类开始-->
      <div class="tab">  {dede:channel type='son' noself='yes'}<a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a> {/dede:channel}</div>
      <!--新闻分类结束-->
      <div class="inews">
        <ul class="list">
          {dede:arclist row='8' titlelen='50' orderby='pubdate'}
		  <li><a href="view.php?aid=[field:id/]" title="[field:title/]">
            <h3 class="tit">[field:title/]</h3>
            <p class="time">[field:pubdate function="MyDate('Y-m-d',@me)"/]</p>
            </a></li>
			{/dede:arclist}
        </ul>
        <a class="look_more" href="list.php?tid={dede:field name='id'/}" title="查看更多>">查看更多>></a></div>
    </div>
  </section>