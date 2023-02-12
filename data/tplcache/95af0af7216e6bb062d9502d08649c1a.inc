<div class="products">
        <div class="products_title">
            {dede:field name='typename'/}
            <a href="list.php?tid={dede:field name='id'/}">更多>></a>
        </div>
        <ul>
                        {dede:arclist row='4' titlelen='50' orderby='pubdate'}
						<li>
                <a href="view.php?aid=[field:id/]" title="[field:title/]" class="img">
                   <img src="[field:litpic/]" alt="[field:title/]" />
                   <h3>[field:title/]</h3>
                </a>
            </li>
			{/dede:arclist}
                    </ul>
    </div>