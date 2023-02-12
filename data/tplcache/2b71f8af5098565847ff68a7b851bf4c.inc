<section id="floor_4_main">
    <div class="floor_4">
      <div class="in_title">
        <p class="entit">CASE</p>
        <h3 class="tit"><em class="line fl"></em><span class="word">{dede:field name='typename'/}</span><em class="line fr"></em></h3>
      </div>
      <!--案例分类开始-->
      <div class="tab"> {dede:channel type='son' row='6' currentstyle=" <a href='list.php?tid=~id~'>~typename~</a> "} <a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a> {/dede:channel} </div>
      <!--案例分类结束-->
      <div class="caseList" id="caseShow">
        <div class="bd">
          <ul class="list clearfix">
            {dede:arclist row='5' titlelen='50' orderby='pubdate'}
            <li><a href="view.php?aid=[field:id/]" title="[field:title/]">
              <div class="img"><img class="img" src="[field:picname/]" alt="[field:title/]"/></div>
              <div class="txt">
                <h3 class="tit" >[field:title/]</h3>
                <p class="cont">[field:description function="cn_substr(@me,160)"/]...</p>
              </div>
              </a></li>
            {/dede:arclist}
          </ul>
        </div>
        <div class="hd">
          <ul class="iconList">
          </ul>
        </div>
      </div>
      <a class="look_more" href="list.php?tid={dede:field name='id'/}" title="查看更多>">查看更多>></a></div>
  </section>