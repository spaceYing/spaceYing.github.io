<section id="floor_1_main">
    <div class="floor_1">
      <div class="about clearfix"><a class="item fl" href="list.php?tid={dede:field name='id'/}"> <img src="/m/style/images/about.jpg" alt="{dede:field name='typename'/}"/></a>
        <div class="contW fl">
          <div class="in_title">
            <p class="entit">{dede:field name='typenameen'/}</p>
            <h3 class="tit"><em class="line fl"></em><span class="word">{dede:field name='typename'/}</span><em class="line fr"></em></h3>
          </div>
          <a href="list.php?tid={dede:field name='id'/}">
          <p class="cont">{dede:sql sql='Select content from dede_arctype where id=1'} 
            [field:content  function='cn_substr(html2text(@me),400)'/]...
            {/dede:sql}</p>
          </a><a class="view_detail" href="list.php?tid={dede:field name='id'/}" title="了解详情>>">了解详情>></a> </div>
      </div>
    </div>
  </section>