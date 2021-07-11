// maintransition.c @ L326282
void func_4109()
{
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    HUD::SET_FRONTEND_ACTIVE(0);
  }
  if (func_42() == 35)
  {
    HUD::_REMOVE_WARNING_MESSAGE_LIST_ITEMS();
    func_643(0);
  }
  func_4268(0);
  func_1050(1);
  Global_1312442 = 1;
  func_1975(1);
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
  }
  if (Global_2457251)
  {
    STREAMING::SET_STREAMING(1);
    Global_2457251 = 0;
  }
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_1824()))
  {
    AUDIO::STOP_AUDIO_SCENE(func_1824());
  }
  if ((func_42() == 4 || func_42() == 5) || func_42() == 15)
  {
    CAM::DO_SCREEN_FADE_OUT(0);
  }
}