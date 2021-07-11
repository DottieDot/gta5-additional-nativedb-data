// am_kill_list.c @ L26302
void func_678(bool bParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
      VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
    }
  }
}