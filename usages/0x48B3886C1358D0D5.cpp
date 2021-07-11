// ambient_diving.ysc @ L1651
void func_39(var uParam0, var uParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = (func_32(*uParam0) + iParam2);
  func_37(&((uParam1[iParam2 /*11*/])->f_1));
  func_48(&((uParam1[iParam2 /*11*/])->f_2));
  (uParam1[iParam2 /*11*/])->f_1 = 0;
  (uParam1[iParam2 /*11*/])->f_10 = 0;
  func_47(&(uParam0->f_1), iParam2, 1);
  if (*uParam0 == 1 || *uParam0 == 0)
  {
    func_46(*uParam0, iParam2, 1);
  }
  PAD::SET_PAD_SHAKE(0, 200, 250);
  STATS::STAT_INCREMENT(uParam0->f_6, 1f);
  if (bLocal_41)
  {
    func_45(&(uParam0->f_1), iParam2);
  }
  else
  {
    func_43(&(uParam0->f_1));
  }
  func_41();
  STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
  func_40(1, 0);
  func_10();
  uParam0->f_11 = 1;
}