<div class="col-md-3 col-xs-6 col-sm-6 clo-lg-3">
    <div class="thumbnail gray">
      [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>"); [/field:array]
      <div class="captionc">
        <h3 style="color:#c0c0c0;"><a href="[field:arcurl/]" class="title">[field:title function=' ( strlen("@me")>15 ? cn_substr("@me",15)."..." : "@me" ) ' /]</a></h3>
        <small>[field:typelink/]</small><small style="color:#c0c0c0;">|浏览[field:click/]次</small>

      </div>
    </div>
  </div>