// am_pi_menu.c @ L387259
int func_5001(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  var uVar2;
  var uVar3;
  int iVar4;
  
  if (iParam0 != -1)
  {
    iVar0 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iParam0);
    iVar1 = 0;
    while (iVar1 < iVar0)
    {
      FILES::GET_FORCED_COMPONENT(iParam0, iVar1, &uVar2, &uVar3, &iVar4);
      if (iVar4 == iParam1)
      {
        return 1;
      }
      iVar1++;
    }
  }
  return 0;
}