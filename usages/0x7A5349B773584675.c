// shop_controller.c @ L248802
void func_935()
{
  if (!func_151(7323, -1, -1))
  {
    if (func_1337())
    {
      NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_534(Global_101549));
    }
    MONEY::_NETWORK_EARN_FROM_RDR_BONUS(Global_262145.f_23624, joaat("WEAPON_STONE_HATCHET"));
    func_936(0, PLAYER::PLAYER_PED_ID(), "HEADSHNORP", -1859646258, 1463643130, Global_262145.f_23625, 1, -1, 0, 0, 0);
  }
  if (func_1337())
  {
    func_524(Global_101549);
  }
  func_570(7323, 1, -1, 1);
}