<section id="floor_5_main">
    <div class="floor_5">
      <div class="in_title">
        <p class="entit">NEWS</p>
        <h3 class="tit"><em class="line fl"></em><span class="word">{dede:field name='typename'/}</span><em class="line fr"></em></h3>
      </div>
      <!--新闻分类开始-->
      <div class="tab"> {dede:channel type='son' row='6' currentstyle=" <a href='list.php?tid=~id~'>~typename~</a> "} <a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a> {/dede:channel} </div>
      <!--新闻分类结束-->
      <div class="inews">
        <ul class="list">
          {dede:arclist row='5' titlelen='50' orderby='pubdate'}
          <li><a href="view.php?aid=[field:id/]" title="[field:title/]">
            <h3 class="tit" >[field:title/]</h3>
            <p class="time">[field:pubdate function="MyDate('Y-m-d',@me)"/]</p>
            </a></li>
          {/dede:arclist}
        </ul>
        <a class="look_more" href="list.php?tid={dede:field name='id'/}" title="查看更多>">查看更多>></a></div>
    </div>
  </section>