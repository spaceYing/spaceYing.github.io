<div class="floor_4">
      <div class="in_title">
        <h3 class="tit"><em class="line fl"></em><span class="word">{dede:field name='typename'/}</span><em class="line fr"></em></h3>
      </div>
      <div class="caseList" id="caseShow">
        <div class="bd"> {dede:arclist typeid='' row='10' titlelen='50' orderby='pubdate'}<li><a href="view.php?aid=[field:id/]" title="[field:title/]">
            <div class="img"><img class="img" src="[field:litpic/]" alt="[field:title/]"/></div>
            <div class="txt">
              <h3 class="tit" >[field:title/]</h3>
              <p class="cont">[field:description function="cn_substr(@me,80)"/]...</p>
            </div>
            </a></li>
			{/dede:arclist}
 </div>
        <div class="hd">
          <ul class="iconList">
          </ul>
        </div>
      </div>
      <a class="look_more" href="list.php?tid={dede:field name='id'/}" title="查看更多>">查看更多>></a></div>