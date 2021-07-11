// am_heli_taxi.ysc @ L11921
int func_324(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = HUD::GET_BLIP_SPRITE(iParam1);
  if (func_331(iParam0, iParam2))
  {
    if (!iVar0 == func_330(iVar0))
    {
      HUD::SET_BLIP_SPRITE(iParam1, func_330(iVar0));
      return 1;
    }
    else if (func_326() && iVar0 == func_330(iVar0))
    {
      return 1;
    }
  }
  else if (!iVar0 == func_325(iVar0))
  {
    HUD::SET_BLIP_SPRITE(iParam1, func_325(iVar0));
    return 1;
  }
  else if (func_326() && iVar0 == func_325(iVar0))
  {
    return 1;
  }
  return 0;
}