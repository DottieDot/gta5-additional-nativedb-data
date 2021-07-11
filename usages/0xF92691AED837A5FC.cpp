// agency_heist1.ysc @ L542
void func_1()
{
  int iVar0;
  int iVar1;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
    {
      iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
      if (!PED::IS_PED_INJURED(iVar1))
      {
        if (iVar1 != PLAYER::PLAYER_PED_ID())
        {
          if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
          {
            if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
            {
              TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
            }
          }
        }
      }
    }
  }
}