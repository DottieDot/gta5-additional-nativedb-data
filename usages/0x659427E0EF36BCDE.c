// armenian1.c @ L45951
void func_412(int iParam0)
{
  float fVar0;
  int iVar1;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
    if (!PED::IS_PED_INJURED(iVar1))
    {
      if (!iVar1 == PLAYER::PLAYER_PED_ID())
      {
        fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
        if (fVar0 < 8f)
        {
          fVar0 = 8f;
        }
        if (fVar0 > 62.9f)
        {
          fVar0 = 62.9f;
        }
        TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
        PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
        if (bLocal_125)
        {
          PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
          PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
        }
        PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
      }
    }
  }
}