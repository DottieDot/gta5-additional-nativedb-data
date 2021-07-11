// exile1.ysc @ L4145
void func_48(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
  if (bParam0)
  {
    func_49();
  }
  if (bParam1)
  {
    if (!func_63() || (bParam0 && !bParam3))
    {
      HUD::CLEAR_PRINTS();
    }
    HUD::CLEAR_REMINDER_MESSAGE();
  }
  if (bParam2)
  {
    HUD::CLEAR_HELP(1);
  }
}