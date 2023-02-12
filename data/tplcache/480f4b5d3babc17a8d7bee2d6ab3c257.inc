<div class="floor_5 w1200 clearfix">
    <div class="floor_5_main" >
      <div class="indexTit">
        <h2 class="tit" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">{dede:field name='typename'/}</h2>
        <i aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100"></i> 
        <!--新闻分类开始-->
        <div class="menu clearfix" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
          <ul class="list clearfix">
            {dede:channel type='son' noself='yes'}
            <li class='item[field:global runphp='yes' name=autoindex]
                      $a="";
                        $b=" hover";
                        if ((@me%0)==0 && @me!=0)  @me=$a;
                        else  @me=$b;
                        [/field:global]'><a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a></li>
            {/dede:channel}
          </ul>
        </div>
        <!--新闻分类结束-->
        <div class="content" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
          <div class="news" id="news">
            <div class="bd" >
              <ul class="list clearfix">
                {dede:arclist row='10' titlelen='50' orderby='pubdate'}
				<li class="item"><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"/>
                  <div class="tit">
                    <p class="p1">[field:title/]</p>
                    <p class="p2"><span class="s2">[field:pubdate function="MyDate('d',@me)"/]</span><span class="s1">[field:pubdate function="MyDate('Y-m',@me)"/]</span></p>
                  </div>
                  </a></li>
				  {dede:arclist}
              </ul>
            </div>
            <div class="hd"> <span class="prev icon"></span> <a href="{dede:field name='typeurl'/}"><span class="amore icon"></span></a> <span class="next icon"></span> </div>
          </div>
        </div>
      </div>
    </div>
  </div>