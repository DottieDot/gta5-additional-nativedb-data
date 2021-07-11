// am_challenges.c @ L22587
void func_663(int iParam0, var uParam1, bool bParam2)
{
  MISC::CLEAR_BIT(&(uParam1->f_33), 7);
  Global_1574182 = 0;
  func_580();
  Global_1574181 = 0;
  uParam1->f_27 = 0;
  if (bParam2)
  {
    if (func_47(&(uParam1->f_19)))
    {
      func_46(&(uParam1->f_19));
      MISC::CLEAR_BIT(&(Global_2531497.f_4592), 5);
    }
  }
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
  {
    GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
  }
  if (MISC::IS_BIT_SET(uParam1->f_33, 0))
  {
    MISC::CLEAR_BIT(&(uParam1->f_33), 0);
  }
  HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}