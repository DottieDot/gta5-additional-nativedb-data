// am_casino_peds.ysc @ L107913
void func_1067(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    func_1037();
  }
  if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
  {
    if (bParam1)
    {
      HUD::SET_FRONTEND_ACTIVE(0);
    }
    if (bParam0)
    {
      func_1040(0, 0, 1);
    }
  }
}