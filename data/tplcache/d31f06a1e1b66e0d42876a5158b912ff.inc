<div class="floor_1_main">
    <div class="floor_1 w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit"><em>{dede:field name='typenameen'/}</em></h3>
        <p class="subtit"></p>
      </div>
      <!--产品分类开始-->
      <div class="menu1 clearfix" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
	   {dede:channel type='son' noself='yes'}
	  <a class="item" href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a> 
	    {/dede:channel}    
	  </div>
      <!--产品分类结束-->
      <div class="product">
        <div class="left" aos="fade-right" aos-easing="ease" aos-duration="700">
          <dl>
		  {dede:arclist  typeid='6' row='2' titlelen='60' orderby='pubdate' }
            <dd class="d[field:global runphp='yes' name=autoindex][/field:global]">
              <div class="box1"><a href="[field:arcurl/]" title="[field:title/]">
                <h3>[field:title/]</h3>
                <p>产品以再生废纸、芦苇浆、甘蔗浆、植物桔杆、果壳等为原料,可完全回收再生利用。~再生废纸、植物桔杆等为原料 产品原料和成品弃置后...</p>
                <i class="icon"></i><span class="icon"></span></a></div>
              <div class="box2"><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"></a></div>
            </dd>
  {/dede:arclist}

          </dl>
        </div>
        <!--推荐内容开始-->
        <div class="right" aos="fade-left" aos-easing="ease" aos-duration="700">
          <div class="iproduct" id="product">
            <div class="bd">
              <ul class="list clearfix">
			  {dede:arclist row='5' titlelen='60' orderby='pubdate'  typeid='6'  flag='h'}
                <li class="item"><a href="[field:arcurl/]" title="[field:title/]">
                  <div class="img"><img src="[field:litpic/]" alt="[field:title/]"/></div>
                  <div class="txt">
                    <h3 class="tit">[field:title/]</h3>
                  </div>
                  </a></li>
  {/dede:arclist}

              </ul>
            </div>
            <div class="hd">
              <ul class="iconList">
              </ul>
            </div>
          </div>
        </div>
        <!--推荐内容结束--> 
      </div>
    </div>
  </div>