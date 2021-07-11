// standard_global_reg.ysc @ L105473
void func_501(var uParam0, char* sParam1)
{
  MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 20, sParam1);
  MISC::_0x48F069265A0E4BEC(uParam0, "Movie_Name_For_This_Player");
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "OS_For_This_Player");
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "Theme_For_This_Player");
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "Vibrate_For_This_Player");
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "Provider_For_This_Player");
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "Wallpaper_For_This_Player");
  MISC::_0x48F069265A0E4BEC(&(uParam0->f_11), "Ringtone_For_This_Player");
  MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_17), "LastMessageNeedsRead");
  MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "LaunchToTextMessageScreen");
  MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_19), "ThisPlayerOnScheduledActivity");
  MISC::STOP_SAVE_STRUCT();
}