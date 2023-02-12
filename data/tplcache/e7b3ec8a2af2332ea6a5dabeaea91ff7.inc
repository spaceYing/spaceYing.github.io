<div class="a3 clearfix">
	<div class="a3_1 fl">
		<p>
			<img src="/skin/images/about.jpg" title="关于我们" alt="关于我们">
		</p>
	</div>
	<div class="a3_2 fr">
		<div class="a3_t">
			<span>{dede:field name='typename'/}</span>{dede:field name='typenameen'/}
		</div>
		<div class="a3_d">
			<p style="line-height:2em">
				 {dede:sql sql='Select content from dede_arctype where id=2'} 
        [field:content  function='cn_substr(html2text(@me),900)'/]
        {/dede:sql}...
			</p>
		</div>
	</div>
</div>