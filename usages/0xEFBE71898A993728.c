// agency_prep1.c @ L4375
void func_97()
{
  if (bLocal_1012)
  {
    if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_833, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_833, 0) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_832, iLocal_833))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_832, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_832, 0))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_833) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_833, true)) > 250f))
    {
      bLocal_1012 = false;
    }
  }
  else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_833, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_833, 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_832, iLocal_833))
  {
    bLocal_1012 = true;
  }
}