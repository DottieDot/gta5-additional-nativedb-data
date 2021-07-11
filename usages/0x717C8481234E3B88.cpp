// am_mp_property_ext.ysc @ L263224
void func_3534()
{
  int iVar0;
  
  if (func_3897(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
      {
        if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iVar0, 0, -1))
        {
          MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iVar0, true), 5f, 0);
        }
      }
    }
  }
}