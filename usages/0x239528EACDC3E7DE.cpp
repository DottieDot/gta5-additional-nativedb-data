// am_lowrider_int.ysc @ L81427
void func_400()
{
  func_6();
  if (HUD::DOES_BLIP_EXIST(Global_1662522))
  {
    HUD::SET_BLIP_ROUTE(Global_1662522, false);
    HUD::REMOVE_BLIP(&Global_1662522);
  }
  func_366(31, 0);
  func_404();
  PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
  if (func_403())
  {
    func_402();
  }
  CUTSCENE::REMOVE_CUTSCENE();
  func_381();
  func_380(0);
  func_21(0);
  func_401();
}