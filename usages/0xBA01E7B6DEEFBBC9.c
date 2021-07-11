// agency_heist3a.c @ L13513
void func_160(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  if (iParam0 != 0)
  {
    PED::SET_PED_COMPONENT_VARIATION(iParam0, iParam2, iParam3, iParam4, iParam5);
  }
  CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iParam2, iParam3, iParam4, 0);
}