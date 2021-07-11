// maintransition.c @ L155129
void func_1719(var uParam0)
{
  var uVar0;
  var uVar1;
  int iVar2;
  
  func_1718();
  if (HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_PAUSE_MENU_RESTARTING())
  {
    if (HUD::IS_FRONTEND_READY_FOR_CONTROL() || func_1235(0))
    {
      if (HUD::_0x2E22FEFA0100275E() || func_1235(0))
      {
        if (!func_1235(0))
        {
          HUD::_0x7E17BE53E1AAABAF(&uVar1, &iVar2, &uVar0);
        }
        if (iVar2 == 71 || func_1235(0))
        {
          func_1551(0);
          uParam0->f_504 = 79 + 1000;
          func_1768(5);
        }
      }
    }
  }
}