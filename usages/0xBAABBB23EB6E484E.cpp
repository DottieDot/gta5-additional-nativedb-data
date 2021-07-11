// act_cinema.ysc @ L1554
void func_19()
{
  if (MISC::IS_BIT_SET(iLocal_272, 2))
  {
    func_1068(0, 0);
    GRAPHICS::SET_TV_CHANNEL(-1);
    func_958();
  }
  func_957(&Local_217, 0, 1);
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
    CAM::DO_SCREEN_FADE_IN(500);
    iLocal_255 = 0;
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
    iLocal_278 = 0;
    func_1175(5);
  }
  else
  {
    CAM::DO_SCREEN_FADE_IN(500);
    iLocal_255 = 0;
    if (iLocal_278)
    {
      func_1057(PLAYER::PLAYER_ID(), 1, 0, 0);
    }
    iLocal_278 = 0;
    Local_289[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/].f_1 = 0;
    func_1175(5);
  }
}