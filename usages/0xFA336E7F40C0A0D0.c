// act_cinema.c @ L116360
void func_1008(int iParam0)
{
  bool bVar0;
  
  bVar0 = false;
  if (!func_1017())
  {
    bVar0 = true;
  }
  if (iParam0 != -1)
  {
    if (func_1011(iParam0))
    {
      if (!bVar0)
      {
        NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
      }
    }
    else if (!bVar0)
    {
      NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263810[iParam0 /*84*/].f_65);
    }
    func_1009(&(Global_4263810[iParam0 /*84*/]));
  }
}