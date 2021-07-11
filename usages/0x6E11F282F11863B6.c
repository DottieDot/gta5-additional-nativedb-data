// act_cinema.c @ L41351
int func_262(int iParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;
  int iVar1;
  var uVar2;
  int iVar3;
  
  *iParam3 = -1;
  iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam3, &uVar2, &iVar3);
    if ((((iVar3 == 11 && *iParam3 != 0) && *iParam3 != joaat("0")) && iParam1 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, joaat("HOOD_UP"), 0)) && iParam2 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, joaat("HOOD_TUCKED"), 0))
    {
      return 1;
    }
    iVar1++;
  }
  return 0;
}