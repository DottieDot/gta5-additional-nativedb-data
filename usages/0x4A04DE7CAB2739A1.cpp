// fm_deathmatch_controler.ysc @ L273046
void func_3753(bool bParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (func_3754(ENTITY::GET_ENTITY_MODEL(iVar0)))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || !bParam0)
      {
        AUDIO::SET_VEHICLE_BOOST_ACTIVE(iVar0, 0);
      }
    }
  }
  Global_1312319 = 0;
}