// am_mp_creator_trailer.c @ L277434
void func_3998()
{
  if (CAM::IS_GAMEPLAY_CAM_SHAKING())
  {
    CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
  }
  func_4005();
  func_4004();
  func_4003();
  func_4002(&(Local_1910.f_17));
  func_3856(&uLocal_1920, 0);
  func_4001(&uLocal_1911);
  if (func_7(PLAYER::PLAYER_ID(), 1, 1) && MISC::IS_BIT_SET(Local_1910.f_3, 8))
  {
    PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
  }
  func_4000();
  func_3999();
}