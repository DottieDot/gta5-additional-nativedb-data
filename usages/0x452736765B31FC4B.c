// standard_global_init.c @ L661
void func_16(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
  if (iParam3 == 7)
  {
    return;
  }
  Global_93838[iParam3 /*9*/].f_8 = MISC::ADD_POLICE_RESTART(vParam1, fParam2, 0);
  MISC::DISABLE_POLICE_RESTART(Global_93838[iParam3 /*9*/].f_8, false);
  Global_93838[iParam3 /*9*/] = { vParam0 };
  Global_93838[iParam3 /*9*/].f_3 = { vParam1 };
  Global_93838[iParam3 /*9*/].f_6 = fParam2;
  Global_93838[iParam3 /*9*/].f_7 = iParam4;
  func_12(iParam4, 0, 0);
  func_11(iParam4, 0);
  func_10(iParam4, 1);
  func_9(iParam4, 0, 0);
  func_8(iParam4, 1);
  func_7(iParam4, Global_93838[iParam3 /*9*/]);
  func_6(iParam4, 3);
  func_5(iParam4, 60);
}