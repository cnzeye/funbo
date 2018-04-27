<?php
$z[0]=Array("include","",0,35);
$z[0][4]['filename']="head.htm";
$z[1]=Array("field","(@me==\"2\")? @me=\" class='active'\":@me=\"\";",435,526);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channel","\r\n	<a href=\"[field:typeurl/]\"><li>[field:typename/]</li></a>\r\n\r\n	",551,679);
$z[2][4]['row']="20";
$z[2][4]['type']="son";
$z[2][4]['typeid']="2";
$z[3]=Array("arclist","\r\n\r\n	<div   class=\"col-md-3 col-xs-6 col-sm-6 clo-lg-3 \">\r\n		<div class=\"indeximg\">\r\n			\r\n			<a href='[field:arcurl/]'>[field:image/]\r\n				\r\n			</a>\r\n\r\n			<p><a href=\"[field:arcurl/]\">[field:title/]</a></p>\r\n			<small style=\"color: #c0c0c0\"><img src=\"/templets/funboo/images/type.png\" style=\"width:11px;\">[field:typelink/]<img src=\"/templets/funboo/images/view.png\" style=\"width:16px;\">[field:click/]hits</small>\r\n\r\n\r\n		</div>\r\n\r\n	</div>\r\n\r\n	",787,1326);
$z[3][4]['typeid']="2";
$z[3][4]['titlelen']="24";
$z[3][4]['imgheight']="90";
$z[3][4]['imgwidth']="112";
$z[3][4]['limit']="0,20";
$z[4]=Array("channelartlist","\r\n		<div class=\"swiper-slide\">\r\n			<div class=\"swiper-slide-box\">\r\n				{dede:type}\r\n				<h1>[field:typename/]</h1>\r\n				<h5>[field:description/]</h5>\r\n				{/dede:type}\r\n				<!-- 子栏目 -->\r\n				<ul class=\"list-group\">\r\n					{dede:channel type='son'}\r\n					<li class=\"list-group-item\"><a href='[field:typelink /]'>[field:typename/]</a></li>\r\n					{/dede:channel}\r\n				</ul>\r\n			</div>\r\n		</div>\r\n		",1560,2015);
$z[4][4]['typeid']="20";
$z[5]=Array("field","(@me==\"8\")? @me=\" class='active'\":@me=\"\";",4439,4530);
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\r\n	<a href=\"[field:typeurl/]\"><li>[field:typename/]</li></a>\r\n\r\n	",4555,4683);
$z[6][4]['row']="20";
$z[6][4]['type']="son";
$z[6][4]['typeid']="8";
$z[7]=Array("arclist","\r\n	\r\n	<div class=\"col-md-4 col-lg-4 col-sm-6 col-xs-6\">\r\n		<div class=\"newbox\">\r\n			<div class=\"newbox-l\">\r\n				<a href='[field:arcurl/]'>[field:image/]</a>\r\n			</div>\r\n			<div class=\"newbox-r\">\r\n				<h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2>\r\n				<p>[field:description function=\"cn_substr(@me,250)\"/]</p>\r\n				<p>[field:pubdate function='strftime(\"%m-%d\",@me)'/]|<a href=\"[field:typeurl/]\" target=\"_blank\">[field:typename/]</a></p>\r\n			</div>\r\n		</div>\r\n	</div>\r\n	",4778,5354);
$z[7][4]['typeid']="8";
$z[7][4]['titlelen']="24";
$z[7][4]['imgheight']="100%";
$z[7][4]['imgwidth']="100%";
$z[7][4]['limit']="0,20";
$z[8]=Array("arclist","<li>[field:image/]</li>",5670,5761);
$z[8][4]['typeid']="19";
$z[8][4]['titlelen']="24";
$z[8][4]['limit']="0,20";
$z[9]=Array("include","",5806,5843);
$z[9][4]['filename']="footer.htm";

?>