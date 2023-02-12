<div class="products">
        <div class="products_title">
            {dede:field name='typename'/}
            <a href="list.php?tid={dede:field name='id'/}">更多>></a>
        </div>
        <div class="contentss clearfix">
            <div class="jiantu">
                <p><img src="skin/images/1539652332680311.png" title="1539652332680311.png" alt="1495016063747548.png"/></p>
            </div>
            <div class="gsnr">
                {dede:sql sql='Select content from dede_arctype where id=1000'} 
        [field:content  function='cn_substr(html2text(@me),900)'/]
        {/dede:sql}
            </div>
        </div>
    </div>