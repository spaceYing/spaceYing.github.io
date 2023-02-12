<div class="news mt">
	<div class="container">
		<div class="row">
			<div class="newtit">
				<h2>{dede:field name='typename'/}</h2>
				<span>{dede:field name='typenameen'/}</span>
			</div>
			<p class="newstext">{dede:field name='description'/}</p>
			  <!-- Nav tabs -->
			  <ul class="nav nav-tabs col-lg-offset-4 col-md-offset-4 col-xs-offset-1" role="tablist">
				{dede:type typeid='13'}<li role="presentation" class="active"><a href="#home" aria-controls="home" role="tab" data-toggle="tab">[field:typename /]</a></li>{/dede:type}
				{dede:type typeid='14'}<li role="presentation"><a href="#profile" aria-controls="profile" role="tab" data-toggle="tab">[field:typename /]</a></li>{/dede:type}
				<li role="presentation"><a href="{dede:field name='typeurl'/}">查看更多</a></li>
			  </ul>
			  <!-- Tab panes -->
			  <div class="tab-content">
				<div role="tabpanel" class="tab-pane active" id="home">
					<div class="container">
						<div class="row">
							<div class="col-lg-4 col-lg-offset-2 hidden-xs hidden-md img"><img src="/skin/images/adv.png"/></div>
							<div class="col-lg-4 col-xs-12">
								<ul class="newslist">
									{dede:arclist typeid='13' row='6' titlelen='50' orderby='pubdate'}
									<li><a href="[field:arcurl/]"><i>[field:title/]</i><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span></a></li>
									{/dede:arclist}
								</ul>
							</div>
						</div>
					</div>
				</div>
				<div role="tabpanel" class="tab-pane" id="profile">
					<div class="container">
						<div class="row">
							<div class="col-lg-4 col-lg-offset-2 hidden-xs hidden-md img"><img src="/skin/images/adv.png"/></div>
							<div class="col-lg-4 col-xs-12 col-md-12">
								<ul class="newslist">
									{dede:arclist typeid='14' row='6' titlelen='50' orderby='pubdate'}
									<li><a href="[field:arcurl/]"><i>[field:title/]</i><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span></a></li>
									{/dede:arclist}
								</ul>
							</div>
						</div>
					</div>
				</div>
			  </div>
			
		</div>
	</div>
</div>