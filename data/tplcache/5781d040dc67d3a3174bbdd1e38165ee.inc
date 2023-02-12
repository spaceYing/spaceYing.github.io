<li class="first-level sf-with-ul {dede:field.currentstyle/}"><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>{dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'
					<ul class="two">':'';
            {/dede:field}
						{dede:channel type='son' noself='yes'}
						<li><a indepth="true" href="[field:typelink/]"><strong>[field:typename/]</strong></a></li>
						{/dede:channel}{dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'						
					</ul>':'';
            {/dede:field}
					</li>