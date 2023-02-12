<div class="row-a9-mob wow fadeInUp" data-wow-duration="1s" data-wow-delay=".1s">
    <div class="wp">
      <div class="g-tit">
        <h3>{dede:field name='typename'/}</h3>
        <p><span>{dede:field name='description'/}</span></p>
      </div>
      <ul class="ul-mobNews">
        {dede:arclist typeid='' row='5' titlelen='60' orderby='pubdate'}
		<li><a href="[field:arcurl/]"  title="[field:title/]"><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>[field:title/]</a></li>
		{/dede:arclist}
      </ul>
    </div>
  </div>