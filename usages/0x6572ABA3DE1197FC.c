// casinoroulette.c @ L245689
void func_3826(int iParam0)
{
  int iVar0;
  
  iVar0 = func_3727();
  iParam0->f_2737.f_3 = (iVar0 - iParam0->f_784);
  iParam0->f_2737.f_4 = iVar0;
  iParam0->f_2737.f_5 = func_3827(&(iParam0->f_2698), 0, 0);
  iParam0->f_2737.f_9 = -1;
  if (Global_262145.f_25976)
  {
    STATS::_PLAYSTATS_CASINO_ROULETTE_LIGHT(&(iParam0->f_2737));
  }
  iParam0->f_2737.f_2 = MISC::GET_HASH_KEY("none");
}