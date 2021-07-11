// am_hunt_the_beast.ysc @ L98696
void func_393(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  struct<14> Var2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar0 = func_392(2101, iParam0, 0);
  if (iVar0 < 1)
  {
    iVar1 = func_392(2051, iParam0, 0);
    if (bParam1)
    {
      iVar3 = joaat("mp_m_freemode_01");
      iVar1 = func_165(iVar1);
    }
    else
    {
      iVar3 = joaat("mp_f_freemode_01");
      iVar1 = func_163(iVar1);
    }
    Var2 = { func_219(iVar3, 2, iVar1, -1) };
    iVar4 = PED::_0xC56FBF2F228E1DAC(iVar3, Var2.f_3, Var2.f_4);
    iVar5 = PED::_0xEA9960D07DADCF10(iVar4);
    func_264(2151, iVar4, iParam0, 1, 0);
    func_264(2158, iVar5, iParam0, 1, 0);
  }
}