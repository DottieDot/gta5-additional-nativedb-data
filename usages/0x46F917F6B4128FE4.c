// fm_deathmatch_creator.c @ L211144
void func_1554()
{
  int iVar0;
  bool bVar1;
  
  iVar0 = 0;
  while (iVar0 <= 1)
  {
    Global_1312739[iVar0] = func_511(384, iVar0, -1);
    iVar0++;
  }
  Global_1312745 = func_54(joaat("MPPLY_LAST_MP_CHAR"));
  bVar1 = Global_1384128;
  if (bVar1)
  {
    Global_1384128 = 0;
  }
  STATS::PLAYSTATS_AWARD_XP(func_509(639, -1, 1), -1158693853, 654913086);
  func_1555(func_509(639, -1, 1), 654913086, 0);
  Global_1384128 = bVar1;
}