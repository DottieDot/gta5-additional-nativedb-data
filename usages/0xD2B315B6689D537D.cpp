// code_controller.ysc @ L35999
void func_383()
{
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), true);
  }
  func_252(68, 1);
}