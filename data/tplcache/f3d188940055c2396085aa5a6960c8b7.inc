<section class="floor4">
    <section class="indexTit clearfix">
      <h3 class="tit"><em>{dede:field name='typename'/}</em></h3>
      <p class="subtit"></p>
    </section>
    <section class="about">
      <div class="aImg"><img src="/m/skin/images/about.jpg" alt="{dede:field name='typename'/}"/></div>
      <div class="aCont">
        <h3 class="aTit">{dede:field name='typename'/}</h3>
        <p class="aTxt"> {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),300)'/]
        {/dede:sql}...</p>
        <a class="kMore" href="list.php?tid={dede:field name='id'/}">了解详情 &gt;&gt;</a> </div>
    </section>
  </section>