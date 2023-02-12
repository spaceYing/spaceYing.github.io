<div class="floor1">
    <section class="indexTit clearfix">
      <h3 class="tit"><em>{dede:field name='typename'/}</em></h3>
      <p class="subtit"></p>
    </section>
    <!--产品分类开始-->
    <dl class="clearfix">
      
      {dede:channel type='son' noself='yes'}
      <dd><a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a></dd>
	  {/dede:channel}  
      
    </dl>
    <!--产品分类结束--> 
    <!--推荐内容开始-->
    <div class="swiper-container">
      <div class="swiper-wrapper"> 
	      {dede:arclist row='6' titlelen='60' orderby='pubdate' flag='h'}
		  <div class="swiper-slide"><a href="view.php?aid=[field:id/]" title="[field:title/]">
          <div class="img"><img src="[field:litpic/]" alt="[field:title/]"></div>
          <h3>[field:title/]</h3>
          <p class="cont">[field:description/]...</p>
          </a></div>
        {/dede:arclist}
 </div>
      <div class="swiper-pagination"></div>
    </div>
    <!--推荐内容结束--> 
    <script>
        var swiper = new Swiper('.swiper-container', {
            pagination: {
                el: '.swiper-pagination',
            },
        });
</script>
    <ul class="productlist clearfix">
	dede:arclist row='2' titlelen='60' orderby='pubdate'}
      <li class="item"><a href="view.php?aid=[field:id/]" title="[field:title/]">
        <figure><img src="[field:litpic/]" alt="[field:title/]"></figure>
        <h3>[field:title/]</h3>
        </a></li>
{/dede:arclist}

    </ul>
    <!--小banner开始-->
    <section class="enquiry">
      <div class="txt">
        <h3 class="tit"><em>定制化纤维成型方案，</em>由专业团队提供服务</h3>
        <p class="subtit">纸、陶瓷、碳纤维等行业非标准化设备制造及产品设计</p>
        <p class="subtit">宁夏共享、俄罗斯BARAMIST等数十家行业知名企业或机构合作伙伴</p>
      </div>
      <div class="btns"> <a class="tel" href="tel:{dede:global.cfg_tel/}">电话咨询</a> <a class="online ewmbtn" onclick="dkcf()">在线咨询</a> </div>
    </section>
    <!--小banner结束--> 
  </div>