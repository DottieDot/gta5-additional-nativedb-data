// am_mp_property_ext.c @ L278733
int func_3695(int iParam0)
{
  int iVar0;
  bool bVar1;
  int iVar2;
  
  if (func_849())
  {
    iVar0 = 0;
    bVar1 = false;
    if (func_3690(iParam0))
    {
      if (!func_3689(iParam0))
      {
        iVar0 = 1;
      }
      else
      {
        bVar1 = true;
      }
    }
    iVar2 = func_3687(iParam0, iVar0, bVar1);
    if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar2))
    {
      return NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar2, 426439576, 1);
    }
  }
  return Global_1049852[iParam0 /*1951*/].f_32;
}