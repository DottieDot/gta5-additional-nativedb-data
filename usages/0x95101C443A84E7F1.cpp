// casinoroulette.ysc @ L251644
void func_4043(int iParam0)
{
  int iVar0;
  
  iVar0 = func_3727();
  iParam0->f_2700.f_6 = (iVar0 - iParam0->f_785);
  iParam0->f_2700.f_7 = iVar0;
  iParam0->f_2700.f_17 = func_3827(&(iParam0->f_2696), 0, 0);
  iParam0->f_2700.f_16 = 0;
  if (Global_262145.f_25970 && func_3922(iParam0) > 0)
  {
    STATS::_PLAYSTATS_CASINO_ROULETTE(&(iParam0->f_2700));
  }
  iParam0->f_2700.f_4 = MISC::GET_HASH_KEY("none");
}