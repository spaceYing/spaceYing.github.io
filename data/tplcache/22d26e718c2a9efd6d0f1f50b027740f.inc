<section class="floor_4_main">
    <div class="txt">
      <h2>关于我们</h2>
      <i></i>
      <p>　　 {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),400)'/]
        {/dede:sql}...</p>
      <a href="tel:{dede:global.cfg_tel/}" class="amore">立即咨询</a></div>
  </section>