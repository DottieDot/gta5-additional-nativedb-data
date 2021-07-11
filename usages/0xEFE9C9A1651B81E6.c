// gb_casino.c @ L363434
void func_5655()
{
  int iVar0;
  var uVar1;
  
  switch (func_7081())
  {
    case 0:
      if (func_7337(140))
      {
        return;
      }
      iVar0 = 500;
      if (iVar0 > 0)
      {
        if (func_802())
        {
          func_1517(-31156877, iVar0, &uVar1, 0, 0, 0);
        }
        else
        {
          func_5656(iVar0, 0);
          MONEY::_NETWORK_EARN_FROM_CASHING_OUT(iVar0);
        }
      }
      func_7338(140);
      break;
  }
}