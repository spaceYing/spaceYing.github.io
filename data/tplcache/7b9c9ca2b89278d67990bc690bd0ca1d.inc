<li><a  
			{dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'class="v1"':'';
            {/dede:field}
			href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>{dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'
			<dl>':'';
            {/dede:field}
               {dede:channel type='son' noself='yes'}
               <dd><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></dd>
			   {/dede:channel}{dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);      
            @me=is_array($row)?'			   
			</dl>':'';
            {/dede:field}
        </li>