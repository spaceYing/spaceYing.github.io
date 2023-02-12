<section class="floor_1_main">
    <div class="in_title">
      <h3 class="cntit">某某公司 ·<span>{dede:field name='typename'/}</span></h3>
      <i>{dede:field name='description'/}</i></div>
    <div class="floor_1" id="floor_1"> 
      <!--产品分类开始-->
      <div class="imenu hd clearfix">
        <ul class="list clearfix">
          {dede:channel type='son' currentstyle="
          <li><a href='list.php?tid=~id~'>~typename~</a></li>
          "}
          <li><a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a></li>
          {/dede:channel}          
        </ul>
      </div>
      <!--产品分类结束-->
      <div class="productlist">
        <div class="bd">
          <ul class="list clearfix">
            {dede:arclist row='6' titlelen='50' orderby='pubdate'}
			<li class="item"><a href="view.php?aid=[field:id/]" title="[field:title/]">
              <figure><img src="[field:litpic/]" alt="[field:title/]"/></figure>
              <h3>[field:title/]</h3>
              </a></li>
			  {/dede:arclist}
          </ul>
        </div>
      </div>
      <div class="more clearfix"><a href="list.php?tid={dede:field name='id'/}">查看更多</a></div>
    </div>
  </section>