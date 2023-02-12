<div class="about_serv" style="background-image: url(/skin/images/about.jpg); background-size: cover;">
	<div class="container">
		<div class="row">
			<div class="col-xs-12 col-sm-6 col-md-6 left col">
			</div>
			<div class="col-xs-12 col-sm-6 col-md-6 about_right">
				<h2>{dede:field name='typename'/}</h2>
				<p>{dede:field name='typenameen'/}</p>
				<p class="about_contents">
					 {dede:sql sql='Select content from dede_arctype where id=1'} 
        [field:content  function='cn_substr(html2text(@me),550)'/]
        {/dede:sql}...
				</p>
				<p>
				</p>
				<a href="{dede:field name='typeurl'/}" class="about_btn">MORE</a>
			</div>
		</div>
	</div>
</div>