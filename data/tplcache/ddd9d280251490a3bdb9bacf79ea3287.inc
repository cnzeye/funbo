<div class="col-md-4 col-xs-6 col-sm-6 clo-lg-3" style="background-color: white;margin-top:30px;">
  <div class="thumbnail">
    [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>"); [/field:array]
    <div class="caption">
      <h3 style="color:#c0c0c0;"><a href="[field:arcurl/]" class="title">[field:title/]</a></h3>
      <small>[field:typelink/]</small><small style="color:#c0c0c0;">|[field:pubdate function="GetDateTimeMK(@me)"/]</small>

    </div>
  </div>
</div>