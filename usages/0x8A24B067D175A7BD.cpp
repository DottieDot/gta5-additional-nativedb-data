// business_battles_sell.ysc @ L321284
void func_4809()
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar2;
  
  if (!func_111(24))
  {
    iVar0 = 0;
    while (iVar0 < 3)
    {
      vVar1 = { func_4811(iVar0) };
      vVar2 = { func_4810(iVar0) };
      if (!func_328(vVar1))
      {
        if (!PED::_DOES_SCENARIO_BLOCKING_AREA_EXIST(vVar1 - vVar2, vVar1 + vVar2))
        {
          iLocal_989[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(vVar1 - vVar2, vVar1 + vVar2, 0, 1, 1, 1);
          MISC::SET_BIT(&iLocal_990, iVar0);
        }
      }
      iVar0++;
    }
    func_5728(24);
  }
}