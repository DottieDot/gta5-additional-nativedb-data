// am_mp_arc_cab_manager.ysc @ L86261
void func_501(bool bParam0, int iParam1)
{
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hei_prop_hei_drill_hole"));
  if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ch_finale"))
  {
    STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_ch_finale");
  }
  if (bParam0)
  {
    STREAMING::REMOVE_ANIM_DICT(func_413());
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_laserdrill_01a"));
    AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEIST3\HEIST_FINALE_LASER_DRILL");
  }
  else
  {
    AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL");
    AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST\HEIST_FLEECA_DRILL_2");
    STREAMING::REMOVE_ANIM_DICT(func_413());
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ch_prop_ch_heist_drill"));
  }
  STREAMING::REMOVE_ANIM_DICT("anim@heists@fleeca_bank@drilling");
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
}