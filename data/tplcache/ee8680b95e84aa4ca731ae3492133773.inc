<div class="products">
        <div class="products_title">
            {dede:field name='typename'/}
            <a href="{dede:field name='typeurl'/}">更多>></a>
        </div>
        <ul>
                        {dede:arclist row='4' titlelen='50' orderby='pubdate'}
						<li>
                <a href="[field:arcurl/]" title="[field:title/]" class="img">
                   <img src="[field:litpic/]" alt="[field:title/]" />
                   <h3>[field:title/]</h3>
                </a>
            </li>
			{/dede:arclist}
                    </ul>
    </div>