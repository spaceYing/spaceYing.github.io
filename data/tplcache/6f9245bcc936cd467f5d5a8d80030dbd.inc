<!--产品展示开始-->
<div class="i_pro_bg2">
    <div class="wp1">
        <div class="in_pro_title anim anim-1"><b>{dede:field name=typenameen/}</b><a href="{dede:field name=typeurl/}" title="{dede:field name=typename/}">{dede:field name=typename/}</a></div>
        <div id="owl-demo2" class="owl-carousel anim anim-2">
		    {dede:arclist row=10 titlelen=100}
            <div class="item">
                <dd class="not-animated"><a href="[field:arcurl/]" title="[field:fulltitle/]">
                    <div class="imgs"><img src="[field:litpic/]" alt="[field:fulltitle/]"></div>
                    <h3>[field:title/]
                        <p>[field:description/]...</p>
                    </h3>
                    </a></dd>
            </div>
			{/dede:arclist}
        </div>
        <script src="/skin/js/owl.carousel.js" ></script>
        <script>
        $("#owl-demo2").owlCarousel({
            items: 2,
            lazyLoad: true,
            autoPlay: true,
            itemsDesktop: [1199, 2],
            itemsDesktopSmall: [979, 2],
            itemsTablet: [768, 2],
            itemsTabletSmall: false,
            itemsMobile: [479, 1],
            navigation: true
        });
</script>
    </div>
</div>
<!--产品展示结束-->