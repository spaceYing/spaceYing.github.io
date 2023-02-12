<section id="floor_4_main">
    <div class="floor_4">
      <div class="in_title">
        <p class="entit">{dede:field name='typenameen'/}</p>
        <h3 class="tit"><em class="line"></em><span class="word">{dede:field name='typename'/}</span><em class="line"></em></h3>
      </div>
      <div class="proCenter">
        <ul class="list clearfix">
          {dede:arclist typeid='' row='6' titlelen='50' orderby='pubdate'}
		  <li><a href="view.php?aid=[field:id/]" title="[field:title/]">
            <div class="img"><img class="img" src="[field:litpic/]" alt="[field:title/]"/></div>
            <div class="txt">
              <h3 class="tit">[field:title/]</h3>
            </div>
            </a></li>
			{/dede:arclist}
        </ul>
      </div>
    </div>
  </section>