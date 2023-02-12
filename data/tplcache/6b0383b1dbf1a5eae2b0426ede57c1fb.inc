<div class="floor_4_main">
    <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
      <h3 class="tit">某某公司 ·<span>{dede:field name='typename'/}</span></h3>
      <p class="subtit">{dede:field name='description'/}</p>
    </div>
    <div class="floor_4_1" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
      <div class="bd">
        <ul>
          {dede:channel type='son' currentstyle=""}
          <li><a href="[field:typelink/]" title="[field:typename/]"><img src="/skin/images/fw[field:global name=autoindex runphp="yes"]@me=@me+1;[/field:global].jpg" alt="[field:typename/]">
            <div class="hui">
              <p>[field:typename/]<span>[field:description/]</span></p>
              <i class="icon"></i></div>
            <div class="dl"><i class="icon"></i>
              <p>[field:typename/]</p>
              <span>[field:description/]</span></div>
            </a></li>
          {/dede:channel}          
        </ul>
      </div>
      <div class="hd">
        <ul>
        </ul>
      </div>
      <span class="blackBg"></span> <span class="blackBg1"></span>
      <div class="pnBtn next"><a class="arrow icon" href="javascript:void(0)"></a></div>
      <div class="pnBtn prev"><a class="arrow icon" href="javascript:void(0)"></a></div>
    </div>
  </div>