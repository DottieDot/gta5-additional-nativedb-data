// abigail1.ysc @ L36547
int func_248(int iParam0)
{
  int iVar0;
  char* sVar1;
  
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
  sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
  if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
  {
    return 1;
  }
  if (!func_239(iVar0, 0))
  {
    return 1;
  }
  return 0;
}