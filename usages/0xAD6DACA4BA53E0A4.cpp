// agency_heist3a.ysc @ L114449
int func_619(int iParam0, int iParam1)
{
  if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
  {
    if (HUD::IS_MESSAGE_BEING_DISPLAYED())
    {
      return 1;
    }
    if (func_620(iParam0))
    {
      return 1;
    }
  }
  if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
  {
    if (func_562() && !func_622())
    {
      return 1;
    }
  }
  return 0;
}