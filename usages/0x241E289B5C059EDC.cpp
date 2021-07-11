// am_mp_property_int.ysc @ L290040
void func_3182()
{
  int iVar0;
  
  if (iLocal_5036)
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        NETWORK::SET_ENTITY_LOCALLY_VISIBLE(iVar0);
      }
    }
  }
}