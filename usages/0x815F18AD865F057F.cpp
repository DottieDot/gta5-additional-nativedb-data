// am_pi_menu.ysc @ L227026
void func_2090(int iParam0, int iParam1, int iParam2, var uParam3)
{
  struct<8> Var0;
  
  Var0 = 568793304;
  Var0.f_1 = PLAYER::PLAYER_ID();
  Var0.f_3 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(iParam0);
  Var0.f_2 = iParam1;
  Var0.f_4 = uParam3;
  Var0.f_5 = 2;
  Var0.f_7 = iParam2;
  SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_253(1, 1));
}