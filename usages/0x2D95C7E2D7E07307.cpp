// am_mp_property_int.ysc @ L303795
void func_3358()
{
  int iVar0;
  
  if (MISC::IS_BIT_SET(Local_2419.f_8, 11) || MISC::IS_BIT_SET(Global_1590095.f_22, 11))
  {
    if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
      {
        ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
        ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
      }
    }
    else
    {
      ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
      NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(0);
    }
    MISC::CLEAR_BIT(&(Local_2419.f_8), 11);
    MISC::CLEAR_BIT(&(Local_2419.f_8), 25);
    MISC::CLEAR_BIT(&(Global_1590095.f_22), 11);
    MISC::CLEAR_BIT(&(Global_1590095.f_22), 25);
  }
}