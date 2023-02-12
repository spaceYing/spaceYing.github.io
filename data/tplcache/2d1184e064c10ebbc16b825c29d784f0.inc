<!--关于我们开始-->
<div class="in_about">
    <div class="wp anim anim-1">
        <div class="in_about_l">
            <h2><b>{dede:field name=typenameen/}</b><a href="{dede:field name=typeurl/}" title="{dede:field name=typename/}">{dede:field name=typename/}</a></h2>
            <p>　　 {dede:field name=content function=cn_substr(Html2Text(@me),600)/}...</p>
            <span><a href="{dede:field name=typeurl/}">READ MORE +</a></span>
		</div>
        <div class="in_about_r"><a href="{dede:field name=typeurl/}"><img src="/skin/images/about.jpg" alt="{dede:field name=typename/}"/></a></div>
    </div>
</div>
<!--关于我们结束-->