// gb_cashing_out.ysc @ L13971
void func_401(int iParam0)
{
  var uVar0;
  
  if (func_136())
  {
    func_121(1347433368, iParam0, &uVar0, 0, 0, 0);
  }
  else
  {
    MONEY::NETWORK_EARN_FROM_PICKUP(iParam0);
  }
}