<section class="floor_5_main">
    <div class="indexTit">
      <h2 class="tit">{dede:field name='typename'/}</h2>
      <i></i></div>
    <div class="textlist">
      <ul class="list">
        {dede:arclist row='5' titlelen='50' orderby='pubdate'}
		<li><a href="view.php?aid=[field:id/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
          <div class="tl"><em >[field:title/]</em>
            <p>[field:description function="cn_substr(@me,200)"/]...</p>
            <i>[field:pubdate function="MyDate('Y-m-d',@me)"/]</i></div>
          </a></li>
		  {/dede:arclist}
      </ul>
    </div>
    <a class="more" href="list.php?tid={dede:field name='id'/}">查看更多</a></section>