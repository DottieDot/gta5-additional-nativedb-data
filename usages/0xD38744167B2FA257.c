// abigail2.c @ L35687
int func_266(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
  int iVar0;
  bool bVar1;
  
  iVar0 = 0;
  bVar1 = true;
  if (bVar1)
  {
    if (func_463(iParam0))
    {
      iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
      HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam2);
      HUD::SET_BLIP_PRIORITY(iVar0, iParam3);
      HUD::SET_BLIP_SCALE(iVar0, 0.7f);
      if (!bParam1)
      {
        HUD::SET_BLIP_SCALE(iVar0, 0.5f);
      }
    }
  }
  return iVar0;
}