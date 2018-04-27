<div class="col-sm-6 col-md-4">
    <div class="thumbnail">
      [field:array runphp='yes']@me = (empty(@me['litpic']) ? "" : "<a href='{@me['arcurl']}' class='preview'><img src='{@me['litpic']}'/></a>"); [/field:array]
      <div class="caption">
        <h3 style="color:#c0c0c0;"><a href="[field:arcurl/]" class="title">[field:title/]</a></h3>
        <small>[field:typelink/]|[field:pubdate function="GetDateTimeMK(@me)"/]</small>
        
      </div>
    </div>
  </div>