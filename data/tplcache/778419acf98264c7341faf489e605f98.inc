<div class="col-md-3 col-xs-6 col-sm-6 clo-lg-3">
  <div class="thumbnail">
    [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'>
      <figure><img src='{@me['litpic']}'/></figure></a>"); [/field:array]
    <div class="captionc">
      <h3 style="color:#c0c0c0;"><a href="[field:arcurl/]" class="title">[field:title function=' ( strlen("@me")>15 ? cn_substr("@me",15)."..." : "@me" ) ' /]</a></h3>
      <small style="color: #c0c0c0"><img src="/templets/default/images/type.png" style="width:11px;">[field:typelink/]<figure><img src="/templets/default/images/view.png" style="width:16px;"></figure>[field:click/]hits</small>

    </div>
  </div>
</div>