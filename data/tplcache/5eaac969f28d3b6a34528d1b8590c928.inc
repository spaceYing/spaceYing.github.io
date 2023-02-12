<section class="floor_1_main">
    <div class="indexTit">
      <h2 class="tit">{dede:field name='typename'/}</h2>
      <i></i></div>
    <div class="floor_1" id="floor_1"> 
      <!--产品分类开始-->
      <div class="imenu hd clearfix">
        <ul class="list clearfix">
          <li class="on"><a href="list.php?tid={dede:field name='id'/}">全部</a></li>
          {dede:channel type='son' noself='yes'}
          <li><a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a></li>
          {/dede:channel}          
        </ul>
      </div>
      <!--产品分类结束-->
      <div class="productlist">
        <div class="bd">
          <ul class="list clearfix">
            {dede:arclist row='6' titlelen='60' orderby='pubdate'}
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