// am_mp_casino_valet_garage.ysc @ L237952
void func_3464()
{
  if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && func_155(PLAYER::PLAYER_PED_ID())) && !Global_1686929)
  {
    PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 46, true);
    PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
    PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
  }
  PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
  if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_121()) && func_3431(0))
  {
    PAD::SET_INPUT_EXCLUSIVE(2, 44);
    PAD::DISABLE_CONTROL_ACTION(2, 44, 1);
  }
  if (CAM::IS_CINEMATIC_CAM_RENDERING())
  {
    CAM::SET_CINEMATIC_MODE_ACTIVE(0);
  }
}