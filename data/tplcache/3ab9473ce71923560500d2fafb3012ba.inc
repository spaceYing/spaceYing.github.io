<div class="a1 w1204">
	<div class="a_t">
		<span>{dede:field name='typename'/}</span>{dede:field name='typenameen'/}
	</div>
	<div class="c2a">
		<div class="tabli">
			<ul class="a1_ul">
				<li><a href="{dede:field name='typeurl'/}">全部</a></li>
				{dede:channel type='son' noself='yes'}
				<li class="layer1"><a href='[field:typelink/]'>[field:typename/]</a></li>
				{/dede:channel}				
			</ul>
		</div>
	</div>
</div>