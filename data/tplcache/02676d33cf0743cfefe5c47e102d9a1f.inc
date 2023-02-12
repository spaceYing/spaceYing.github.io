<div class="zlfc">
  <div class="content">
    <div class="zlfcBox">
      <h4 aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100"> <a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></h4>
      <div class="bd" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
        <ul>
          {dede:arclist typeid='' row='10' titlelen='50' orderby='pubdate'}
		  <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]">
            <p >[field:title/]</p>
            </a></li>
			{/dede:arclist}
        </ul>
      </div>
    </div>
  </div>
</div>