// am_mp_yacht.ysc @ L72022
void func_539(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  struct<5> Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar0 = FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(iParam0);
  if ((iVar0 > 0 && iParam1 < iVar0) && iParam1 > -1)
  {
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 0;
    FILES::_GET_VARIANT_PROP(iParam0, iParam1, &iVar2, &iVar3, &iVar4);
    if (iVar2 != 0 && iVar2 != joaat("0"))
    {
      FILES::INIT_SHOP_PED_PROP(&Var1);
      FILES::GET_SHOP_PED_PROP(iVar2, &Var1);
      *iParam4 = iVar2;
      *iParam2 = Var1.f_3;
      *iParam3 = Var1.f_4;
      *iParam5 = func_447(PLAYER::PLAYER_PED_ID(), Var1.f_3, Var1.f_4, 0);
      return;
    }
  }
}