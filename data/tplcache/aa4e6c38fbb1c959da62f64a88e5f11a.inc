<section class="floor_1_main">
    <div class="indexTit">
      <h2 class="tit">{dede:field name='typename'/}</h2>
      <i></i></div>
    <div class="floor_1" id="floor_1">
      <div class="productlist">
        <div class="bd">
          <ul class="list clearfix">
            {dede:arclist row='4' titlelen='60' orderby='pubdate'}
			<li class="item"><a href="view.php?aid=[field:id/]" title="[field:title/]">
              <figure><img src="[field:litpic/]" alt="[field:title/]"/></figure>
              <h3>[field:title/]</h3>
              </a></li>
			  {/dede:arclist}
          </ul>
        </div>
      </div>
      <a class="more" href="list.php?tid={dede:field name='id'/}">查看更多</a></div>
  </section>