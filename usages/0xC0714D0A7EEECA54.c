// standard_global_reg.c @ L110949
void func_651(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
  var uVar0;
  
  if (iParam3 == 10)
  {
    return;
  }
  uVar0 = func_72(iParam6);
  Global_93737[iParam3 /*10*/].f_8 = MISC::REGISTER_SAVE_HOUSE(vParam1, fParam2, sParam5, 0, uVar0);
  MISC::SET_SAVE_HOUSE(Global_93737[iParam3 /*10*/].f_8, true, 1);
  Global_93737[iParam3 /*10*/] = { vParam0 };
  Global_93737[iParam3 /*10*/].f_3 = { vParam1 };
  Global_93737[iParam3 /*10*/].f_6 = fParam2;
  Global_93737[iParam3 /*10*/].f_7 = iParam4;
  Global_93737[iParam3 /*10*/].f_9 = iParam6;
  if (iParam4 != 263)
  {
    func_110(iParam4, 0, 0);
    func_658(iParam4);
    func_657(iParam4, 0);
    func_655(iParam4, 1, iParam6, 0);
    func_654(iParam4, Global_93737[iParam3 /*10*/]);
    func_653(iParam4, 1);
    func_652(iParam4, 40);
  }
}