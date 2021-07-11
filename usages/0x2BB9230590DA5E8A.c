// agency_heist1.c @ L108241
int func_532(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar0 = 0;
  while (iVar0 < 68)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(Global_75396.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_75396.f_484[iVar0], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75396.f_484[iVar0], 0))
    {
      VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
      VEHICLE::GET_VEHICLE_COLOURS(Global_75396.f_484[iVar0], &iVar3, &iVar4);
      if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_75396.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_75396.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
      {
        return iVar0;
      }
    }
    iVar0++;
  }
  return -1;
}