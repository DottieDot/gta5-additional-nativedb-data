// am_mp_arcade.c @ L290620
int func_4133(int iParam0, char* sParam1, int iParam2)
{
  char cVar0[64];
  int iVar1;
  
  if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
  {
    return 1;
  }
  StringCopy(&cVar0, sParam1, 64);
  StringIntConCat(&cVar0, iParam0, 64);
  iVar1 = func_4134(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
  if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
  {
    return 1;
  }
  return func_4154(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}