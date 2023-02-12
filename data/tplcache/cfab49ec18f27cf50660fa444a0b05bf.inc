<div class="kehu">
  <div class="anniu_kj">
    <div class="container">
      <div class="khdl">
        <h3 aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100"> <a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></h3>
        <div class="bd" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
          <ul>
            {dede:arclist typeid='' row='10' titlelen='50' orderby='pubdate'}
			<li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"><span >[field:title/]</span>
              <p>[field:description function="cn_substr(@me,200)"/]...</p>
              <i></i></a></li>
			  {/dede:arclist}
          </ul>
        </div>
      </div>
      <div class="hd"><em class="prev"></em><em class="next"></em></div>
    </div>
  </div>
</div>