// am_armwrestling.c @ L118857
int func_787(var uParam0, var uParam1, int iParam2)
{
  if (!func_1036(uParam0, 3))
  {
    func_788(uParam0);
    func_718(uParam1, 0, 0, 0, 1);
    func_717(uParam1, "ARMMP_END_QT", 2, 51, 1, 1, 0);
    func_716(uParam1, 1);
    func_1039(uParam0, 3, 1);
  }
  if (func_1036(uParam0, 2))
  {
    return 1;
  }
  if (func_731(iParam2))
  {
    if (func_730(iParam2) > 1.5f)
    {
      if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
      {
        HUD::CLEAR_HELP(1);
      }
      func_1039(uParam0, 3, 0);
    }
  }
  else
  {
    func_729(iParam2, 0, 1);
  }
  return 0;
}