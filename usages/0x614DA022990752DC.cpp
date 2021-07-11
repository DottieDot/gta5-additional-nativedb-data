// agency_heist3a.ysc @ L13145
int func_153(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
  int iVar0;
  
  iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 26, Global_94574[iParam0 /*5*/].f_4, iParam2, 1, true);
  func_158(iVar0, iParam0, iParam3, bParam4);
  ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
  if (func_157(iParam0) == 1)
  {
    PED::SET_PED_MAX_HEALTH(iVar0, func_154(iParam0, 0));
    PED::SET_PED_ACCURACY(iVar0, func_154(iParam0, 1));
    PED::SET_PED_SHOOT_RATE(iVar0, func_154(iParam0, 2));
  }
  else
  {
    PED::SET_PED_MAX_HEALTH(iVar0, 100);
    PED::SET_PED_ACCURACY(iVar0, 25);
    PED::SET_PED_SHOOT_RATE(iVar0, 40);
  }
  return iVar0;
}