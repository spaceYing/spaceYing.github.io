<li {dede:field name=currentstyle/} > <a href="{dede:field name=typeurl/}" target="_self"  class="v1" >{dede:field name=typename/}</a>
          <dl>
		    {dede:channel type=son}
            <dd><a href="[field:typeurl/]">[field:typename/]</a></dd>
			{/dede:channel}
          </dl>
        </li>