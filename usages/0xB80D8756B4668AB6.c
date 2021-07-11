// am_mp_arcade_claw_crane.c @ L84466
void func_505(var uParam0, int iParam1)
{
  if (MISC::IS_BIT_SET(*uParam0, 8))
  {
    STREAMING::REQUEST_ANIM_DICT(func_500());
    STREAMING::REQUEST_MODEL(joaat("ch_prop_laserdrill_01a"));
    if (uParam0->f_40 == 0)
    {
      uParam0->f_40 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("VAULT_LASER");
    }
    AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL", false, -1);
  }
  else
  {
    STREAMING::REQUEST_ANIM_DICT(func_501());
    STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_heist_drill"));
    if (uParam0->f_40 == 0)
    {
      uParam0->f_40 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_2("VAULT_DRILL");
    }
    AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL", false, -1);
    AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2", false, -1);
  }
  STREAMING::REQUEST_MODEL(iParam1);
  STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
  STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ch_finale");
  HUD::REQUEST_ADDITIONAL_TEXT("HACK", 3);
}