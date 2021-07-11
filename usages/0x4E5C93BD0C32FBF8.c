// am_bru_box.c @ L8900
int func_232(struct<21> Param0)
{
  func_236(func_237(Param0), Param0);
  NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
  func_234(0, -1, 0);
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 11);
  NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_62, 97);
  if (!func_233())
  {
    return 0;
  }
  MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    Local_60.f_7 = Param0.f_16;
    Global_1384381 = Local_60.f_7;
    Local_60.f_3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
    if (!func_4(Global_2531497.f_859.f_1))
    {
      MISC::SET_BIT(&(Local_60.f_1), 8);
    }
  }
  bLocal_68 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
  vLocal_62[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
  return 1;
}