// freemode_init.c @ L2162
void func_59()
{
  func_308();
  if (((!func_307() && !func_306()) && !func_305()) && !func_304())
  {
    MISC::SET_INSTANCE_PRIORITY_MODE(1);
  }
  HUD::TOGGLE_STEALTH_RADAR(1);
  PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
  func_302();
  func_300();
  func_298();
  func_297();
  func_253();
  func_250();
  func_246();
  func_240();
  if (func_239() != 1)
  {
    func_217();
  }
  func_164();
  func_161();
  func_154();
  func_140();
  func_75(0);
  func_71();
  func_70();
  func_60();
}