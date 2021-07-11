// agency_heist3a.c @ L114551
int func_624(int iParam0)
{
  int iVar0;
  
  if (func_625(&iVar0))
  {
    if (!PED::IS_PED_INJURED(*iParam0))
    {
      if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, iVar0))
      {
        return 1;
      }
    }
  }
  return 0;
}