// fm_race_creator.c @ L426565
int func_6784(int iParam0)
{
  if (MISC::IS_BIT_SET(Global_2416074.f_366, iParam0) || MISC::IS_BIT_SET(Global_2416074.f_376, iParam0))
  {
    return 1;
  }
  if (HUD::DOES_BLIP_EXIST(Global_2416074[iParam0]))
  {
    if (HUD::_0x2C173AE2BDB9385E(Global_2416074[iParam0]) != 0)
    {
      return 1;
    }
  }
  return 0;
}