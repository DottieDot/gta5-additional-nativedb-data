// armenian1.c @ L42449
void func_380()
{
  if ((func_48("AR1_RAGEBAR") || func_48("AR1_RAGEHOW")) || func_48("AR1_RAGESTAT"))
  {
    HUD::CLEAR_HELP(1);
  }
  if (MISC::IS_PC_VERSION())
  {
    if (func_48("AR1_RAGEBAR_KM"))
    {
      HUD::CLEAR_HELP(1);
    }
  }
  HUD::FLASH_ABILITY_BAR(0);
}