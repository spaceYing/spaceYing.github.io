<div class="inews1" aos="fade-right" aos-easing="ease" aos-duration="700" aos-delay="100"> <div class="title"><a class="more fr" href="{dede:field name='typeurl'/}"  title="更多+">更多+</a>
          <h3><s></s>{dede:field name='typename'/}</h3>
        </div> 
        <!--推荐内容开始-->
        <div class="imgleft" id="inews">
          <div class="bd">
            <ul class="list">
              {dede:arclist row='8' flag='' titlelen='50' orderby='pubdate'}
			  <li class="item"><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"/>
                <div class="txtcon">
                  <h3>[field:title/]</h3>
                </div>
                </a></li>
				{/dede:arclist}
            </ul>
          </div>
          <div class="hd"><span class="prev ico"></span><span class="next ico"></span></div>
        </div>
        <!--推荐内容结束-->
        <ul class="newslist fr">
          {dede:arclist row='8' titlelen='50' orderby='pubdate'}
		  <li><a href="[field:arcurl/]" title="[field:title/]" ><span class="time">[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>[field:title/]</a></li>
		  {/dede:arclist}
        </ul>
      </div>