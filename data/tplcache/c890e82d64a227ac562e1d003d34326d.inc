<div class="floor_5_main">
    <div class="floor_5 w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit">某某公司 ·<span>{dede:field name='typename'/}</span></h3>
        <p class="subtit">{dede:field name='description'/}</p>
      </div>
      <div class="floor_5_1" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
        <div class="layB">
          <div class="tbC"> <a href="javascript:void(0)" class="prev"><span class="icon"></span></a>
            <div class="slide"> {dede:arclist row='10' titlelen='50' orderby='pubdate'}<li><a href="[field:arcurl/]" title="[field:title/]"><em><span>[field:pubdate function="MyDate('d',@me)"/]</span>[field:pubdate function="MyDate('Y-m',@me)"/]</em>
                <h3>
                  <p>[field:title/]<span>[field:description function="cn_substr(@me,200)"/]...</span></p>
                </h3>
                </a></li>
				{/dede:arclist}
 </div>
            <a href="javascript:void(0)" class="next"><span class="icon"></span></a> </div>
        </div>
      </div>
      <div class="floor_5_2" aos="fade-up" aos-easing="ease" aos-duration="700"><i></i><a href="{dede:field name='typeurl'/}"  title="查看更多">查看更多 >></a></div>
    </div>
  </div>