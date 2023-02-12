<div class="floor_5_main">
    <div class="floor_5 w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit"><em>{dede:field name='typename'/}</em></h3>
        <p class="subtit"></p>
      </div>
      <div class="cont clearfix"> 
        <!--推荐内容开始-->
        <div id="newsBox" class="newsBox fl" aos="fade-right" aos-easing="ease" aos-duration="700">
          <div class="bd">
            <ul>
			{dede:arclist row='4' titlelen='50' orderby='pubdate' flag='h'}
              <li><a href="[field:arcurl/]" title="[field:title/]"><img class="img" src="[field:litpic/]" alt="[field:title/]"/>
                <div class="txt">
                  <h3>[field:title/]</h3>
                  <p>[field:description function="cn_substr(@me,155)"/]...</p>
                </div>
                </a></li>
           {/dede:arclist}

            </ul>
          </div>
          <div class="hd">
            <ul>
            </ul>
          </div>
        </div>
        <!--推荐内容结束-->
        <div class="textlist fr" aos="fade-left" aos-easing="ease" aos-duration="700">
          <ul class="list">
		  {dede:arclist row='3' titlelen='50' orderby='pubdate' }
            <li class="item"><a href="[field:arcurl/]" title="[field:title/]">
              <div class="time fl"><b>29</b>2019-10</div>
              <h3>[field:title/]</h3>
              <p>[field:description /]...</p>
              </a></li>
            {/dede:arclist}

          </ul>
        </div>
      </div>
      <a href="{dede:field name='typeurl'/}" class="more" aos="fade-up" aos-easing="ease" aos-duration="700">更多资讯 >></a> </div>
  </div>