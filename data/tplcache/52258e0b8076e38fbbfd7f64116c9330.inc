<section class="floor_6_main">
    <div class="in_title">
      <h3 class="cntit">某某公司 ·<span>{dede:field name='typename'/}</span></h3>
      <i>{dede:field name='description'/}</i></div>
    <div class="textlist">
      <ul class="list">
        {dede:arclist row='5' titlelen='50' orderby='pubdate'}
		<li><a href="view.php?aid=[field:id/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
          <div class="tl"><em >[field:title/]</em>
            <p>[field:description function="cn_substr(@me,80)"/]...</p>
            <span>阅读数：[field:click/]</span><i>日期：[field:pubdate function="MyDate('Y-m-d',@me)"/]</i></div>
          </a></li>
		  {/dede:arclist}
      </ul>
    </div>
    <div class="more clearfix"><a href="list.php?tid={dede:field name='id'/}">查看更多</a></div>
  </section>