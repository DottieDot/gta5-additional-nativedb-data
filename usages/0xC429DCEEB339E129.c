// am_casino_peds.c @ L296439
void func_3653(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
  float fVar0;
  float fVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(*iParam1) && ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0) && !PED::IS_PED_DEAD_OR_DYING(*iParam0, 1))
    {
      fVar0 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(*iParam1);
      if (fVar0 < fParam3)
      {
      }
      fVar1 = ((fParam3 * 100f) / fVar0);
      TASK::TASK_VEHICLE_TEMP_ACTION(*iParam0, *iParam1, iParam4, iParam2);
      VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*iParam1, ((100f - fVar1) * -1f));
    }
  }
}