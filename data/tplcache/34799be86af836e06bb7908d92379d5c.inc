<section class="floor_1_main">
    <div class="indexTit">
      <h2 class="tit">{dede:field name='typename'/}</h2>
      <i></i></div>
    <div class="floor_1" id="floor_1"> 
      <!--产品分类开始-->
      <div class="imenu hd clearfix">
        <ul class="list clearfix">
          <li class="on"><a href="list.php?tid={dede:field name='id'/}">全部</a></li>
          {dede:channel type='son' noself='yes'}
          <li><a href="list.php?tid=[field:id/]" title="[field:typename/]">[field:typename/]</a></li>
          {/dede:channel}          
        </ul>
      </div>
      <!--产品分类结束-->
      <div class="productlist">
        <div class="bd">
          <ul class="list clearfix">
            <li class="item"><a href="view.php?aid=25" title="产品中心标题五">
              <figure><img src="/uploads/allimg/190514/1-1Z5140Z5025F.jpg" alt="产品中心标题五"/></figure>
              <h3>产品中心标题五</h3>
              </a></li>
<li class="item"><a href="view.php?aid=26" title="产品中心标题六">
              <figure><img src="/uploads/allimg/190514/1-1Z5140Z630142.jpg" alt="产品中心标题六"/></figure>
              <h3>产品中心标题六</h3>
              </a></li>
<li class="item"><a href="view.php?aid=28" title="产品中心标题八">
              <figure><img src="/uploads/allimg/190514/1-1Z5140ZP1G2.jpg" alt="产品中心标题八"/></figure>
              <h3>产品中心标题八</h3>
              </a></li>
<li class="item"><a href="view.php?aid=29" title="产品中心标题九">
              <figure><img src="/uploads/allimg/190514/1-1Z5140ZS9607.jpg" alt="产品中心标题九"/></figure>
              <h3>产品中心标题九</h3>
              </a></li>
<li class="item"><a href="view.php?aid=27" title="产品中心标题七">
              <figure><img src="/uploads/allimg/190514/1-1Z5140ZH62X.jpg" alt="产品中心标题七"/></figure>
              <h3>产品中心标题七</h3>
              </a></li>
<li class="item"><a href="view.php?aid=24" title="产品中心标题四">
              <figure><img src="/uploads/allimg/190514/1-1Z5140Z429C6.jpg" alt="产品中心标题四"/></figure>
              <h3>产品中心标题四</h3>
              </a></li>

          </ul>
        </div>
      </div>
      <a class="more" href="list.php?tid={dede:field name='id'/}">查看更多</a></div>
  </section>