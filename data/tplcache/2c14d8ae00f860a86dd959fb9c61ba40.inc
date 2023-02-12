<div class="cpzx" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
  <div class="content"> 
    <!--产品分类开始-->
    <div class="nlist">
      <h4 class="nt nt1"><a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></h4>
      <div class="TabTitle2">
        <ul class="expmenu">
          {dede:channel type='son' noself='yes'}
          <li>
            <div class="header"><a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a></div>
          </li>
          {/dede:channel}          
        </ul>
      </div>
      <!--联系方式开始-->
      <div class="contactn mt10 mb10">
        <div class="t05"> <h5><a href="/a/lianxiwomen/" title="联系我们">联系我们</a></h5> </div>
        <div class="subnr"> <img src="/skin/images/catactus.jpg"/>
          <p><b>{dede:global.cfg_gsmc/}</b> <br>
            邮箱：{dede:global.cfg_email/}<br>
            手机：{dede:global.cfg_phone/}<br>
            电话：{dede:global.cfg_tel/}<br>
            地址：{dede:global.cfg_add/}</p>
        </div>
      </div>
      <!--联系方式结束--> 
    </div>
    <!--产品分类结束-->
    <div class="cptp">
      <ul>
        {dede:arclist typeid='' row='9' titlelen='50' orderby='pubdate'}
		<li><a href="[field:arcurl/]" title="[field:title/]">
          <div class="pic"><img src="[field:litpic/]" alt="[field:title/]"></div>
          <p >[field:title/]</p>
          </a></li>
		  {/dede:arclist}
      </ul>
    </div>
  </div>
</div>