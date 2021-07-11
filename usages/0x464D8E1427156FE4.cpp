// agency_heist3a.ysc @ L147705
void func_1164()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (iLocal_2139 - 1))
  {
    if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_2139[iVar0]))
    {
      OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_2139[iVar0]);
    }
    iVar0++;
  }
}