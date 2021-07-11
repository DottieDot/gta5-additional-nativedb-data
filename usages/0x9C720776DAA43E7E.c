// act_cinema.c @ L118377
void func_1075(bool bParam0, bool bParam1)
{
  if (!bParam0)
  {
    CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
  }
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
  }
  if (!bParam1)
  {
    STREAMING::CLEAR_FOCUS();
  }
  if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
  {
    PLAYER::STOP_PLAYER_TELEPORT();
  }
  func_1059();
  if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 14))
  {
    func_1076();
  }
}