// exile1.c @ L128167
void func_861()
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], 0))
  {
    VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_166[2], 2, 1);
  }
  func_301(5);
  func_534();
  func_131(0, 0);
  func_300();
  iVar0 = 0;
  while (iVar0 < Local_69)
  {
    if (!PED::IS_PED_INJURED(Local_69[iVar0 /*17*/]))
    {
      TASK::TASK_AIM_GUN_AT_COORD(Local_69[iVar0 /*17*/], 2930.5f, 810.5f, 449.1f, -1, 1, 0);
    }
    iVar0++;
  }
  bLocal_368 = true;
}