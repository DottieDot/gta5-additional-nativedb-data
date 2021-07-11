// appsettings.ysc @ L232
void func_2()
{
  func_7();
  if (func_4(0))
  {
    func_3();
  }
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
  }
  if (bLocal_36)
  {
    HUD::CLEAR_HELP(1);
  }
  if (Global_111560.f_14046.f_83 == 0 || Global_111560.f_14046.f_82 == 0)
  {
    func_3();
  }
  MISC::SET_GAME_PAUSED(false);
  SCRIPT::TERMINATE_THIS_THREAD();
}