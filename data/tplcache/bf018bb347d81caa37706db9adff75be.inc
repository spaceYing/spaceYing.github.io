<div class="zz rongyu fr" aos="fade-left" aos-easing="ease" aos-duration="700" aos-delay="100">
      <div class="zz_title"> <a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></div>
      <div class="bd">
        <ul>
          {dede:arclist typeid='' row='10' titlelen='50' orderby='pubdate'}
		  <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"><span >[field:title/]</span></a></li>
		  {/dede:arclist}
        </ul>
      </div>
    </div>