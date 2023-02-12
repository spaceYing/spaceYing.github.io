<div class="floor_7_main">
  <div class="in_title">
    <h3 class="cntit">{dede:field name='typename'/}</h3>
    <p class="entit">{dede:field name='description'/}</p>
    <i></i></div>
  <div class="textlist">
    <ul class="list">
      {dede:arclist row='3' titlelen='50' orderby='pubdate'}
      <li><a href="view.php?aid=[field:id/]" title="[field:title/]"><img src="[field:picname/]" alt="[field:title/]">
        <div class="tl"><em >[field:title/]…</em>
          <p>[field:description function="cn_substr(@me,80)"/]...</p>
          <span>阅读数：[field:click/]</span><i>日期：[field:pubdate function="MyDate('Y-m-d',@me)"/]</i></div>
        </a></li>
      {/dede:arclist}
    </ul>
  </div>
  <div class="floor_7_2"><a href="{dede:field name='typeurl'/}" title="了解详情" class="a1">了解详情</a><a onclick="dkcf()" title="在线咨询" class="a2">在线咨询</a></div>
</div>