<section class="floor_3_main">
    <div class="floor_3_1">
      <div class="in_title">
        <h3 class="cntit">某某公司 ·<span>{dede:field name='typename'/}</span></h3>
        <i>{dede:field name='description'/}</i></div>
      <div class="floor_3_2"> 
        {dede:channel type='son' currentstyle=""}
		<dl class="dl[field:global name=autoindex runphp="yes"]@me=@me+1;[/field:global]">
          <a href="list.php?tid=[field:id/]" title="[field:typename/]">
          <dt><img src="/m/skin/images/fw[field:global name=autoindex runphp="yes"]@me=@me+1;[/field:global].jpg"  alt="[field:typename/]"></dt>
          <dd><i></i>
            <h3>[field:typename/]<span></span></h3>
            <p>[field:description/]</p>
          </dd>
          </a>
        </dl>
        {/dede:channel}
         </div>
      <div class="more clearfix"><a href="list.php?tid={dede:field name='id'/}">查看更多</a></div>
    </div>
  </section>