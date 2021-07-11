// event_controller.ysc @ L2983
void func_109()
{
  int iVar0;
  int iVar1;
  
  func_115();
  if (SOCIALCLUB::_0xFF8F3A92B75ED67A() && !func_112())
  {
    iVar0 = 0;
    while (iVar0 < 5)
    {
      iVar1 = SOCIALCLUB::_0x4A7D6E727F941747(func_111(iVar0));
      if (iVar1 > 0)
      {
        Global_1662701.f_16[iVar0 /*44*/] = iVar1;
        func_110(iVar0, iVar1);
      }
      iVar0++;
    }
  }
  else
  {
    iVar0 = 0;
    while (iVar0 < 5)
    {
      Global_1662701.f_16[iVar0 /*44*/].f_4 = 0;
      iVar0++;
    }
  }
}