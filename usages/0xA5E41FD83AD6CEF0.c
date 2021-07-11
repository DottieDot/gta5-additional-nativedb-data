// business_battles.c @ L203775
int func_2895(var uParam0, bool bParam1, int iParam2, int iParam3)
{
  if (func_2896(iParam3))
  {
    if (HUD::DOES_BLIP_EXIST(*uParam0))
    {
      if (bParam1)
      {
        if (!HUD::IS_BLIP_FLASHING(*uParam0))
        {
          if (!MISC::IS_BIT_SET(*iParam2, iParam3))
          {
            HUD::SET_BLIP_FLASHES(*uParam0, true);
            HUD::SET_BLIP_FLASH_TIMER(*uParam0, 2000);
            MISC::SET_BIT(iParam2, iParam3);
            return 1;
          }
          else
          {
            return 0;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return 0;
}