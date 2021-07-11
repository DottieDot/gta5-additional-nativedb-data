// agency_heist3a.ysc @ L127017
void func_822()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_72))
  {
    if (ENTITY::IS_ENTITY_DEAD(Local_61, 0))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_72, 0))
      {
        if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_72))
        {
          ENTITY::SET_ENTITY_PROOFS(Local_72, false, false, false, false, false, false, 0, false);
        }
      }
    }
  }
}