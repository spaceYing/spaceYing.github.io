<!--新闻资讯开始-->
<div class="in_news_bg">
    <div class="wp">
        <div class="in_news_title anim anim-1"><b>{dede:field name=typenameen/}</b><a href="{dede:field name=typeurl/}" title="{dede:field name=typename/}">{dede:field name=typename/}</a></div>
        <!--推荐内容开始-->
		{dede:arclist row=1 flag=c titlelen=100}
        <div class="in_news_t anim anim-1">
            <div class="in_news_t_l"><a href="[field:arcurl/]" title="[field:fulltitle/]" class="img"><img src="[field:litpic/]" alt="[field:fulltitle/]"></a></div>
            <div class="in_news_t_r"><a href="[field:arcurl/]" title="[field:fulltitle/]">[field:title/]</a><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
                <p>[field:description/]...</p>
                <h3><a href="[field:arcurl/]">READ MORE +</a></h3>
            </div>
        </div>
        <!--推荐内容结束-->
		{/dede:arclist}
    </div>
    <div class="wp3">
        <div class="in_news anim anim-3">
		    {dede:arclist row=4 noflag=c titlelen=100}
            <div class="in_news_list">
                <h4><a href="[field:arcurl/]" title="[field:fulltitle/]" class="img"><img src="[field:litpic/]" alt="[field:fulltitle/]"></a></h4>
                <h5><a href="[field:arcurl/]" title="[field:fulltitle/]">[field:title/]</a><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
                    <p>[field:description/]...</p>
                </h5>
            </div>
			{/dede:arclist}
        </div>
    </div>
</div>
<!--新闻资讯结束-->