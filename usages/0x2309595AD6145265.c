// director_mode.c @ L131197
void func_838()
{
  struct<13> Var0[1];
  int iVar1;
  
  if (!iLocal_624)
  {
    if (HUD::GET_CURRENT_FRONTEND_MENU_VERSION() == -2060115030)
    {
      Var0[0 /*13*/] = { func_763() };
      if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
      {
        iVar1 = MISC::GET_GAME_TIMER();
        while ((!func_840(&Var0) && NETWORK::NETWORK_IS_SIGNED_ONLINE()) && (MISC::GET_GAME_TIMER() - iVar1) < 10000)
        {
          func_839(1, "while waiting for stats");
          SYSTEM::WAIT(0);
        }
        iLocal_624 = 1;
      }
    }
  }
}