// armenian1.ysc @ L6061
void func_101(char* sParam0, int iParam1, int iParam2, int iParam3)
{
  struct<50> Var0;
  int iVar1;
  
  Var0 = 12;
  Var0.f_13 = 12;
  Var0.f_26 = 12;
  Var0.f_39 = 9;
  Var0.f_49 = 9;
  func_102(iParam1, &Var0, iParam3);
  iVar1 = 0;
  while (iVar1 < 12)
  {
    CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
    iVar1++;
  }
  iVar1 = 0;
  while (iVar1 < 9)
  {
    if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
    {
      CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
    }
    else
    {
      CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
    }
    iVar1++;
  }
}