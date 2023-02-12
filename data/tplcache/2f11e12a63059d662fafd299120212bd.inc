<section id="floor_1_main">
    <div class="floor_1">
      <div class="in_title">
        <p class="entit">About Us</p>
        <h3 class="tit"><em class="line"></em><span class="word">{dede:field name='typename'/}</span><em class="line"></em></h3>
      </div>
      <div class="about clearfix">
        <div class="contW fl">
          <div class="cont">
            <div class="item"><img class="img" src="/skin/images/about.jpg" alt="{dede:field name='typename'/}"/></div>
             {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),500)'/]
        {/dede:sql}...</div>
          <a class="look_more" href="list.php?tid={dede:field name='id'/}" title="查看更多>">查看更多>></a> </div>
      </div>
    </div>
  </section>