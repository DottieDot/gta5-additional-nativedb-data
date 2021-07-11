// am_mp_arcade.c @ L288130
int func_4118(int iParam0, char* sParam1)
{
  char cVar0[64];
  char cVar1[64];
  
  if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
  {
    return 1;
  }
  StringCopy(&cVar0, sParam1, 64);
  StringIntConCat(&cVar0, iParam0, 64);
  StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
  if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
  {
    return 1;
  }
  return func_4154(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}