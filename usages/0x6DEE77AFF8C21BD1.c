// am_challenges.c @ L24651
int func_768(struct<21> Param0)
{
  int iVar0;
  
  func_777(func_778(Param0), Param0);
  NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(func_776(9));
  NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(func_775(9));
  func_772(0, -1, 0);
  func_770(133);
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_171, 88);
  NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1537, 385);
  if (!func_769())
  {
    func_730();
  }
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    STATS::_0x6DEE77AFF8C21BD1(&(Local_171.f_52), &(Local_171.f_53));
  }
  Local_1538.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
  MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
  iVar0 = 0;
  while (iVar0 < 10)
  {
    iLocal_168[iVar0] = -1;
    iVar0++;
  }
  return 1;
}