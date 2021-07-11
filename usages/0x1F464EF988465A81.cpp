// standard_global_init.ysc @ L350
void func_4(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
  if (iParam3 == 5)
  {
    return;
  }
  Global_93902[iParam3 /*9*/].f_8 = MISC::ADD_HOSPITAL_RESTART(vParam1, fParam2, 0);
  MISC::DISABLE_HOSPITAL_RESTART(Global_93902[iParam3 /*9*/].f_8, false);
  Global_93902[iParam3 /*9*/] = { vParam0 };
  Global_93902[iParam3 /*9*/].f_3 = { vParam1 };
  Global_93902[iParam3 /*9*/].f_6 = fParam2;
  Global_93902[iParam3 /*9*/].f_7 = iParam4;
  func_12(iParam4, 0, 0);
  func_11(iParam4, 0);
  func_10(iParam4, 1);
  func_9(iParam4, 0, 0);
  func_8(iParam4, 1);
  func_7(iParam4, Global_93902[iParam3 /*9*/]);
  func_6(iParam4, 2);
  func_5(iParam4, 61);
}