// agency_heist1.c @ L116460
int func_681()
{
  int iVar0;
  
  iVar0 = 0;
  if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0)) && !PED::IS_PED_INJURED(iLocal_171))
  {
    if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, 0))
    {
      if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_176, false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false)) < 10000f)
      {
        if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_176))
        {
          iVar0 = 1;
        }
        if (ENTITY::GET_ENTITY_SPEED(iLocal_176) > 60f)
        {
          iVar0 = 1;
        }
        if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
        {
          iVar0 = 1;
        }
        if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
        {
          iVar0 = 1;
        }
      }
    }
  }
  return iVar0;
}