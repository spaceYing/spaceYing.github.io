<li class="{dede:field.currentstyle/}">
					<a{dede:field name='typename'/} 
            {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?' href="javascript:"':'';
            {/dede:field} href="{dede:field name='typeurl'/}"><span>{dede:field name='typename'/}</span>{dede:field name='typename'/} 
            {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'
					<i class="touch-arrow-down"></i>
					':'';
            {/dede:field}</a>{dede:field name='typename'/} 
            {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'
					<ul class="two">':'';
            {/dede:field}
						{dede:channel type='son' noself='yes'}
						<li><a indepth="true" href="[field:typelink/]"><span>[field:typename/]</span></a></li>
						{/dede:channel}{dede:field name='typename'/} 
            {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'						
					</ul>':'';
            {/dede:field}
					</li>