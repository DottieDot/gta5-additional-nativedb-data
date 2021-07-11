// abigail1.c @ L36635
int func_252(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;
  char* sVar1;
  int iVar2;
  
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    return 0;
  }
  iVar0 = 0;
  while (func_253(iParam1, iVar0, &sVar1, &iVar2))
  {
    if (!bParam2 || MISC::IS_BIT_SET(Global_111560.f_7224[iVar2], 0))
    {
      if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
      {
        return 1;
      }
    }
    iVar0++;
  }
  return 0;
}