// fmmc_launcher.ysc @ L477906
void func_6988(int iParam0, int iParam1, int iParam2, bool bParam3)
{
  if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) < 1)
  {
    return;
  }
  if (iParam2 == -1)
  {
    return;
  }
  if (iParam2 >= VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1))
  {
    return;
  }
  if (VEHICLE::GET_VEHICLE_MOD(iParam0, iParam1) == iParam2)
  {
    return;
  }
  VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, iParam1, iParam2);
  VEHICLE::SET_VEHICLE_MOD(iParam0, iParam1, iParam2, bParam3);
}