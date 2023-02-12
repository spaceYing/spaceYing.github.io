<li class="{dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'dropdown':'';
            {/dede:field}">
				<a class="{dede:field.currentstyle/}" href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>
				<a href="{dede:field name='typeurl'/}" id="app_menudown" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-expanded="false" {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'':' style="display:none;"';
            {/dede:field}><span class="glyphicon glyphicon-menu-down btn-xs "></span></a>
				<ul class='dropdown-menu nav_small' role='menu' {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'':'style="display:none;"';
            {/dede:field}>
					{dede:channel type='son' noself='yes'}
					<li><a href="[field:typelink/]">[field:typename/]</a></li>
					{/dede:channel}					
				</ul>
			</li>