// am_challenges.ysc @ L6623
void func_166()
{
  if (!MISC::IS_BIT_SET(iLocal_142, 6))
  {
    HUD::CLEAR_ALL_HELP_MESSAGES();
    func_473(1, 1);
    AUDIO::STOP_SOUND(iLocal_150);
    MISC::CLEAR_BIT(&iLocal_142, 4);
    func_170();
    func_168();
    HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f, 0, 21);
    MISC::SET_BIT(&iLocal_142, 6);
    func_167();
  }
}