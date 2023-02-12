<li class='{dede:field.currentstyle/}'>
					<a href="{dede:field name='typeurl'/}" data-hover="dropdown">{dede:field name='typename'/} <b class=" icon-angle-down"></b></a>
					<ul class="dropdown-menu">
						{dede:channel type='son' noself='yes'}
						<li><a href="[field:typelink/]">[field:typename/]</a></li>
						{/dede:channel}						
					</ul>
				</li>