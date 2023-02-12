<!--工程案例开始-->
<div class="in_case_bg">
    <div class="wp2">
        <div class="in_case_title anim anim-1"><b>{dede:field name=typenameen/}</b><a href="{dede:field name=typeurl/}" title="{dede:field name=typename/}">{dede:field name=typename/}</a></div>
        <div class="in_case anim anim-1">
            <ul>
			    {dede:arclist row=8 titlelen=100}
                <li><a href="[field:arcurl/]" title="[field:fulltitle/]">
                    <div class="img"><img src="[field:litpic/]" alt="[field:fulltitle/]"></div>
                    <p class="trans" >[field:title/]</p>
                    </a></li>
				{/dede:arclist}
            </ul>
        </div>
    </div>
</div>
<!--工程案例结束-->