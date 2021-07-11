// freemode.c @ L147105
void func_1692()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 5)
  {
    if (MISC::IS_BIT_SET(Global_1590320[iVar0 /*25*/].f_24, 26))
    {
      if (func_1704(Global_1590320[iVar0 /*25*/].f_8))
      {
        if (func_1703(Global_1590320[iVar0 /*25*/].f_8) == 2)
        {
          func_1702(Global_1590320[iVar0 /*25*/].f_2);
          NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_1701(Global_1590320[iVar0 /*25*/].f_8));
          func_1698(Global_1590320[iVar0 /*25*/].f_2, Global_1590320[iVar0 /*25*/].f_4);
          MONEY::NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(Global_1590320[iVar0 /*25*/].f_2, &(Global_1590320[iVar0 /*25*/].f_10));
          func_1697("PIM_TIGC", Global_1590320[iVar0 /*25*/].f_1, Global_1590320[iVar0 /*25*/].f_2, 0, 0, 0, 1);
          func_1693(Global_1590320[iVar0 /*25*/].f_8);
          MISC::CLEAR_BIT(&(Global_1590320[iVar0 /*25*/].f_24), 26);
        }
        else
        {
          func_1693(Global_1590320[iVar0 /*25*/].f_8);
          MISC::CLEAR_BIT(&(Global_1590320[iVar0 /*25*/].f_24), 26);
        }
      }
    }
    iVar0++;
  }
}