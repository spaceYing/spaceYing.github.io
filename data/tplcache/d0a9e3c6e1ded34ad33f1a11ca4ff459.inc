<div class="floor_4_main">
  <div class="floor_4">
    <div class="in_title">
      <h3 class="cntit">{dede:field name='typename'/}</h3>
      <p class="entit">{dede:field name='description'/}</p>
      <i></i></div>
    <!--案例分类开始-->
    <div class="case_main">
      <ul>
        {dede:channel type='son' currentstyle="
        <li><a href='list.php?tid=~id~'>~typename~</a></li>
        "}
        <li><a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a></li>
        {/dede:channel}
      </ul>
    </div>
    <!--案例分类结束-->
    <div class="floor_4_1">
      <ul class="list clearfix">
        {dede:arclist row='4' titlelen='50' orderby='pubdate'}
        <li><a href="view.php?aid=[field:id/]" title="[field:title/]"><img src="[field:picname/]" alt="[field:title/]">
          <p><i >[field:title/]</i><span class="icon1"></span></p>
          </a></li>
        {/dede:arclist}
      </ul>
    </div>
    <div class="floor_4_2"><a href="{dede:field name='typeurl'/}" title="了解详情" class="a1">了解详情</a><a onclick="dkcf()" title="在线咨询" class="a2">在线咨询</a></div>
  </div>
</div>