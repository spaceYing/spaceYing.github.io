<div class="wp">
      <h2 class="g-tit02 wow fadeInDown" data-wow-duration="1s" data-wow-delay=".1s"><span>{dede:field name=typename/}</span></h2>
      <div class="m-txt01 wow fadeInUp" data-wow-duration="1s" data-wow-delay=".1s">
	    {dede:arclist row=4 titlelen=100}
        <div class="item"><a href="[field:arcurl/]"  title="[field:fulltitle/]">
          <div class="txt">
            <h3>[field:title/]</h3>
            <span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
            <p>[field:description/]...</p>
          </div>
          </a> </div>
		{/dede:arclist} 
      </div>
    </div>