// me_amanda1.ysc @ L48798
void func_533(bool bParam0)
{
  func_4(0, bParam0);
  PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vLocal_329, vLocal_330, fLocal_331, 1);
  HUD::CLEAR_PRINTS();
  func_194();
  AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", 0);
  CAM::SET_WIDESCREEN_BORDERS(false, 0);
  SCRIPT::TERMINATE_THIS_THREAD();
}