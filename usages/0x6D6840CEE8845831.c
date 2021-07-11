// am_ferriswheel.c @ L7745
void func_191()
{
  func_197();
  func_195(0);
  func_80(&uLocal_352, 0);
  func_80(&uLocal_302, 0);
  func_79(&Local_303, 0, 1);
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
  {
    AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
  }
  Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_743 = 0;
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (MISC::IS_BIT_SET(Local_1073[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0) || func_179())
    {
      if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
      {
        ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, true);
      }
      if (MISC::IS_BIT_SET(Local_1073[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
      {
        TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
      }
    }
    func_45(0);
  }
  func_41();
  func_192(&uLocal_51);
  func_192(&uLocal_169);
  BRAIN::_0x6D6840CEE8845831("fairgroundHub");
  SCRIPT::TERMINATE_THIS_THREAD();
}