<?php
$z[0]=Array("include","",49,84);
$z[0][4]['filename']="head.htm";
$z[1]=Array("global","",237,269);
$z[1][4]['name']="cfg_templets_skin";
$z[2]=Array("mytag","",669,705);
$z[2][4]['typeid']="0";
$z[2][4]['name']="case";
$z[3]=Array("field","(@me==\"2\")? @me=\" class='active'\":@me=\"\";",1376,1467);
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("channel","\r\n <li role=\"presentation\"><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n ",1523,1726);
$z[4][4]['type']="son";
$z[4][4]['currentstyle']="<li class='active'><a href='~typelink~' >~typename~</a></li>";
$z[5]=Array("channel","\r\n <li role=\"presentation\"><a href=\"[field:typeurl/]\">[field:typename function=' ( strlen(\"@me\")>3 ? cn_substr(\"@me\",3).\"\" : \"@me\" ) ' /]</a></li>\r\n ",1949,2219);
$z[5][4]['type']="son";
$z[5][4]['currentstyle']="<li class='active'><a href='~typelink~' >~typename~</a></li>";
$z[6]=Array("list","\r\n<div class=\"col-md-3 col-xs-6 col-sm-6 clo-lg-3\">\r\n  <div class=\"thumbnail\">\r\n    [field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}' class='preview'>\r\n      <figure><img src='{@me['litpic']}'/></figure></a>\"); [/field:array]\r\n    <div class=\"captionc\">\r\n      <h3 style=\"color:#c0c0c0;\"><a href=\"[field:arcurl/]\" class=\"title\">[field:title function=' ( strlen(\"@me\")>15 ? cn_substr(\"@me\",15).\"...\" : \"@me\" ) ' /]</a></h3>\r\n      <small style=\"color: #c0c0c0\"><img src=\"/templets/default/images/type.png\" style=\"width:11px;\">[field:typelink/]<img src=\"/templets/default/images/view.png\" style=\"width:16px;\">[field:click/]hits</small>\r\n\r\n    </div>\r\n  </div>\r\n</div>\r\n",2272,3013);
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",3334,3407);
$z[7][4]['listitem']="info,index,end,pre,next,pageno";
$z[7][4]['listsize']="10";
$z[8]=Array("include","",3487,3524);
$z[8][4]['filename']="footer.htm";

?>