<div class="jz fl" aos="fade-right" aos-easing="ease" aos-duration="700" aos-delay="100">
      <div class="xinw"> <a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></div>
      <ul>
        {dede:arclist typeid='' row='3' titlelen='50' orderby='pubdate'}
		<li><a href="[field:arcurl/]" title="[field:title/]">
          <div class="xwtp"><img src="[field:litpic/]" alt="[field:title/]"></div>
          <div class="xwwz">
            <h3 >[field:title/]</h3>
            <p>[field:description function="cn_substr(@me,200)"/]...</p>
            <span>[查看详情]</span></div>
          </a></li>
		  {/dede:arclist}
      </ul>
    </div>