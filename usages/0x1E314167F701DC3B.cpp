// am_taxi.ysc @ L5087
int func_110(int iParam0)
{
  int iVar0;
  
  if (HUD::DOES_BLIP_EXIST(iParam0))
  {
    iVar0 = HUD::GET_BLIP_INFO_ID_DISPLAY(iParam0);
    if (!iVar0 == 0 && !iVar0 == 1)
    {
      return 1;
    }
  }
  return 0;
}