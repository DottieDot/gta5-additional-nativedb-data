// agency_heist1.ysc @ L114328
int func_634(int iParam0, bool bParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = func_68(iParam0, !bParam1, 0);
  if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
  {
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
  }
  return iVar0;
}