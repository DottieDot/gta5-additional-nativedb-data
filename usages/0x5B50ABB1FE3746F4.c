// heist_ctrl_agency.c @ L17944
void func_315(var uParam0)
{
  if (!AUDIO::_HAS_MULTIPLAYER_AUDIO_DATA_UNLOADED())
  {
    return;
  }
  HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_272), 5);
  AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1);
  if (*uParam0 != 1)
  {
    STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
    STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
    STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
  }
  uParam0->f_413 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_268));
  uParam0->f_414 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
  MISC::SET_BIT(&Global_94707, *uParam0);
  MISC::SET_BIT(&(uParam0->f_449), 0);
}