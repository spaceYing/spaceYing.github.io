<section id="floor_2_main">
    <div class="floor_2">
      <div class="in_title">
        <p class="entit">{dede:field name='typenameen'/}</p>
        <h3 class="tit"><em class="line"></em><span class="word">{dede:field name='typename'/}</span><em class="line"></em></h3>
      </div>
      <!--产品分类开始-->
      <div class="tab">  {dede:channel type='son' noself='yes'}<a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a> {/dede:channel}</div>
      <!--产品分类结束-->
      <div class="proCenter">
        <ul class="list clearfix">
          {dede:arclist row='6' titlelen='50' orderby='pubdate'}
		  <li><a href="view.php?aid=[field:id/]" title="[field:title/]">
            <div class="img"><img class="img" src="[field:litpic/]" alt="[field:title/]"/></div>
            <div class="txt">
              <h3 class="tit">[field:title/]</h3>
            </div>
            </a></li>
			{/dede:arclist}
        </ul>
      </div>
      <a class="look_more" href="list.php?tid={dede:field name='id'/}" title="查看更多>">查看更多>></a></div>
  </section>