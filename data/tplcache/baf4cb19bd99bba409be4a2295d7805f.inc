<div class="newsBox_right" aos="fade-left" aos-easing="ease" aos-duration="700" aos-delay="100">
        <div class="news_title">
          <h3><a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></h3>
          <a href="{dede:field name='typeurl'/}" class="more">MORE>></a></div>
        <ul>
          {dede:arclist typeid='' row='6' titlelen='50' orderby='pubdate'}
		  <li class='on'><a href="[field:arcurl/]" title="[field:title/]"  >[field:title/]</a>
            <div class="news_nextNav">
              <p>[field:description function="cn_substr(@me,200)"/]...<a href="[field:arcurl/]" title="[查看详情]">[查看详情]</a></p>
            </div>
          </li>
		  {/dede:arclist}
        </ul>
      </div>