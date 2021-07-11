// controller_towing.ysc @ L6362
void func_115()
{
  AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
  SCRIPT::REQUEST_SCRIPT("Towing");
  HUD::CLEAR_HELP(1);
  func_116(&iLocal_58);
}