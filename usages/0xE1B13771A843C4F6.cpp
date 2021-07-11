// pausemenu_multiplayer.ysc @ L12994
void func_355()
{
  int iVar0;
  struct<13> Var1;
  int iVar2;
  var uVar3;
  
  iVar0 = func_142(20);
  Var1 = { func_149(PLAYER::PLAYER_ID()) };
  if (!MONEY::_NETWORK_CAN_SPEND_MONEY_2(iVar0, 0, 1, 0, &iVar2, -1, 0))
  {
    iVar0 = (iVar0 - iVar2);
  }
  if (iVar0 > 0)
  {
    func_356(-iVar0, 1, 1, 0f);
    if (func_148())
    {
      func_130(-180141073, iVar0, &uVar3, 0, 1, 0);
    }
    else
    {
      MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(iVar0, &Var1, false, true);
    }
  }
}