<section class="floor2">
    <section class="indexTit clearfix">
      <h3 class="tit"><em>{dede:field name='typename'/}</em></h3>
      <p class="subtit"></p>
    </section>
    <section class="caseList">
      <ul class="list clearfix">
	   {dede:arclist row='4' titlelen='60' orderby='pubdate'}
        <li class="item"><a href="view.php?aid=[field:id/]" title="[field:title/]">
          <figure class="img"><img src="[field:litpic/]" alt="[field:title/]"></figure>
          <h3 class="tit">[field:title/]</h3>
          </a></li>
       {/dede:arclist}

      </ul>
    </section>
    <a class="cMore" href="list.php?tid={dede:field name='id'/}">更多案例</a> </section>