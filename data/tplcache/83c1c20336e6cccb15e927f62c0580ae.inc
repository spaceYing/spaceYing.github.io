<div id="floor_1_main">
    <div class="floor_1 w1200">
      <div class="in_title clearfix" aos="fade-up" aos-easing="ease" aos-duration="700">
        <p class="entit" aos="fade-up" aos-easing="ease" aos-duration="700">{dede:field name='typenameen'/}</p>
        <h3 class="tit clearfix" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100"><em class="line"></em><span class="word">{dede:field name='typename'/}</span><em class="line"></em></h3>
      </div>
      <div class="about clearfix" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
        <div class="item fl"><img class="img" src="/skin/images/about.jpg" alt="{dede:field name='typename'/}"/></div>
        <div class="contW fr">
          <p class="cont"> {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),1000)'/]
        {/dede:sql}...</p>
          <p class="view_detail fr"><a href="{dede:field name='typeurl'/}">查看详情</a></p>
          <p class="view_detail fr"><a  href="http://wpa.qq.com/msgrd?v=3&uin={dede:global.cfg_qq/}&site=qq&menu=yes">立即咨询</a></p>
        </div>
      </div>
    </div>
  </div>