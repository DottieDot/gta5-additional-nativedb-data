// agency_heist3b.ysc @ L128542
void func_859(float fParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 9)
  {
    if (func_865(&(Global_111560.f_18098.f_175[iVar0 /*19*/].f_5)))
    {
      func_860(&(Global_111560.f_18098.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
    }
    iVar0++;
  }
  iVar1 = 0;
  while (iVar1 < 6)
  {
    if (func_865(&(Global_111560.f_18098.f_362[iVar1 /*3*/])))
    {
      func_860(&(Global_111560.f_18098.f_362[iVar1 /*3*/]), (fParam0 * 60f));
    }
    iVar1++;
  }
  AUDIO::SKIP_RADIO_FORWARD();
}