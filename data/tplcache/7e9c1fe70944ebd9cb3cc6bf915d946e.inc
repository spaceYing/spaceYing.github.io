<div class="floor_4_main">
    <div class="floor_4 w1200 clearfix">
      <div class="about">
        <div class="aImg" aos="fade-right" aos-easing="ease" aos-duration="700"><img src="/skin/images/about.jpg" alt="{dede:field name='typename'/}"/></div>
        <div class="aCont" aos="fade-left" aos-easing="ease" aos-duration="700">
          <div class="txt">
            <h3 class="aTit">{dede:field name='typename'/}</h3>
            <p class="aTxt"> {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),606)'/]
        {/dede:sql}...</p>
            <a class="kMore" href="{dede:field name='typeurl'/}">了解详情 >></a></div>
        </div>
      </div>
    </div>
  </div>