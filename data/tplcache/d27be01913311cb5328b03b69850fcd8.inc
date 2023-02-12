<div class="floor_6_main">
    <div class="w1200 clearfix">
      <div class="floor_6_1" aos="fade-up" aos-easing="ease">
        <dl>
          <dt>
            <h3>{dede:field name='typename'/}</h3>
            <i></i>
            <p>　　 {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),500)'/]
        {/dede:sql}...</p>
            <a href="{dede:field name='typeurl'/}" title="了解详情" class="icon">了解详情 >></a></dt>
          <dd>
            <p>致力于绿色能源领域技术<br>
              及设备设施开发利用</p>
            <img src="/skin/images/about.jpg" alt="{dede:field name='typename'/}"/></dd>
        </dl>
      </div>
    </div>
  </div>