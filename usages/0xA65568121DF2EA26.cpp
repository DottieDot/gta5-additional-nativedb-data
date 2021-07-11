// maintransition.ysc @ L328520
void func_4239(int iParam0)
{
  struct<84> Var0;
  int iVar1;
  
  Var0.f_65 = 2147483647;
  iVar1 = 0;
  while (iVar1 < 5)
  {
    Global_4263810[iVar1 /*84*/] = { Var0 };
    iVar1++;
  }
  if (func_637() && iParam0 == 1)
  {
    if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
    {
      NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
    }
  }
}