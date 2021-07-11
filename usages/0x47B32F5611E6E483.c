// freemode.c @ L664293
void func_9239(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = 10000000;
  if (func_1996(joaat("MPPLY_FMEVN_CHEAT_START")) > iVar0 && func_1996(joaat("MPPLY_FMEVN_CHEAT_END")) > iVar0)
  {
    func_17581(joaat("MPPLY_FMEVN_CHEAT_TALLY"));
    func_9241(joaat("MPPLY_FMEVN_CHEAT_START"), -iVar0);
    func_9241(joaat("MPPLY_FMEVN_CHEAT_END"), -iVar0);
  }
  iVar1 = (func_1996(joaat("MPPLY_FMEVN_CHEAT_START")) - func_1996(joaat("MPPLY_FMEVN_CHEAT_END")));
  iVar2 = iVar1;
  if (func_9238(11))
  {
    iVar2 = (iVar2 - func_1996(joaat("MPPLY_FMEVN_CHEAT_QUIT")));
    func_2065(joaat("MPPLY_FMEVN_CHEAT_QUIT"), iVar1);
    if (iParam0 == 0)
    {
      STATS::_PLAYSTATS_AWARD_BADSPORT(Global_2461173);
      func_9235(11, 1);
      Global_1373500.f_85[11] = 1;
      func_9240(joaat("MPPLY_OVERALL_BADSPORT"), SYSTEM::TO_FLOAT(iVar2));
    }
  }
}