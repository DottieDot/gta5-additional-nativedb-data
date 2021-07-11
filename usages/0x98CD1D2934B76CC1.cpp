// building_controller.ysc @ L8887
void func_86(int iParam0)
{
  int iVar0;
  var uVar1;
  
  if (!iParam0 == Global_37162)
  {
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 263)
    {
      MISC::SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 18);
      iVar0++;
    }
    if (Global_31108 == 1)
    {
      Global_31109 = 1;
    }
    Global_31108 = 1;
  }
  Global_37162 = iParam0;
  HUD::SET_MINIMAP_IN_PROLOGUE(iParam0);
  uVar1 = ZONE::GET_ZONE_FROM_NAME_ID("PrLog");
  ZONE::SET_ZONE_ENABLED(uVar1, iParam0);
}