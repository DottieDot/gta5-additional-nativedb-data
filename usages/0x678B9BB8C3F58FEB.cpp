// fm_bj_race_controler.ysc @ L485003
void func_7878()
{
  int iVar0;
  
  if (MISC::IS_BIT_SET(Global_4456448.f_28, 23) && func_721(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
      {
        if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iVar0))
        {
          VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, false);
        }
      }
    }
  }
}