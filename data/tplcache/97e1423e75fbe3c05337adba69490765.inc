<div class="floor_1_main">
    <div class="w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit">某某公司 ·<span>{dede:field name='typename'/}</span></h3>
        <p class="subtit">{dede:field name='description'/}</p>
      </div>
      <div class="floor_1"> 
        <!--产品分类开始-->
        <div class="menu hd clearfix" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
          <ul class="list clearfix">
            {dede:channel type='son' currentstyle="
            <li><a href='~typelink~'>~typename~</a></li>
            "}
            <li><a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a></li>
            {/dede:channel}            
          </ul>
        </div>
        <!--产品分类结束-->
        <dl aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="300">
          <!--推荐内容开始--> 
          {dede:arclist limit='0,1' titlelen='50' orderby='pubdate'}
		  <dt><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
            <p><span>[field:title/]</span><i class="icon"></i></p>
            <em><span>[field:title/]</span><s class="icon"></s></em></a></dt>
			{/dede:arclist}
 
          <!--推荐内容结束-->
          <dd>
            <ul>
              {dede:arclist limit='1,4' titlelen='50' orderby='pubdate'}
			  <li class="item"><a href="[field:arcurl/]" title="[field:title/]" class="a1"><img src="[field:litpic/]" alt="[field:title/]">
                <div class="d1"><i class="icon"></i>
                  <h3>[field:title/]</h3>
                </div>
                </a></li>
				{/dede:arclist}
            </ul>
          </dd>
        </dl>
      </div>
      <div class="floor_5_2" aos="fade-up" aos-easing="ease" aos-duration="700" style="margin-top: 50px;"><a href="{dede:field name='typeurl'/}" title="查看更多">查看更多 &gt;&gt;</a></div>
    </div>
  </div>