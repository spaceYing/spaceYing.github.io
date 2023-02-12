<li class='[field:global runphp='yes' name=autoindex]
                      $a="";
                        $b="on";
                        if ((@me%0)==0 && @me!=0)  @me=$a;
                        else  @me=$b;
                        [/field:global]'>[field:global name=autoindex runphp="yes"]@me=@me+1;[/field:global]</li>