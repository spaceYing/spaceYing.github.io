<div class="newsx">
        <div class="products_title">
            {dede:field name='typename'/}
            <a href="list.php?tid=[field:id /]">更多>></a>
        </div>
        <ul class="news-listx">
                        {dede:arclist row='6' titlelen='50' orderby='pubdate'}
						<li>
                <a href="view.php?aid=[field:id/]" title="[field:title/]">
                        [field:title/]
                        <span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span>
                </a>

            </li>
			{/dede:arclist}
                    </ul>
    </div>