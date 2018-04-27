<li class="col-md-3 col-xs-6 col-sm-6 clo-lg-3">
          <div class="thumbnail">
          <a href="[field:arcurl/]" target="_blank">
            [field:array runphp='yes']@me = (empty(@me['litpic']) ? ”" : ”<a href=’{@me['arcurl']}’ class=’preview’><img src=’{@me['litpic']}’/></a>”); [/field:array]
            </a>
            <div class="caption ">
              <h3 style="color:#999999;">
                [field:title/]    </h3>
              <p class="small" style="color:#999999;">
                [field:typelink/]/[field:pubdate function="GetDateTimeMK(@me)"/]<span id="hits"></span>
              </p>
              
            </div>
          </div>
        </li>