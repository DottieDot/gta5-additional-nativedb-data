// assassin_bus.c @ L14822
void func_284(bool bParam0, bool bParam1, int iParam2)
{
  if (bParam0)
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
  }
  CUTSCENE::_0xC61B86C9F61EB404(1);
  func_286(0, 1, iParam2, 0, 0, 0);
  if (bParam1)
  {
    HUD::DISPLAY_RADAR(true);
    HUD::DISPLAY_HUD(true);
  }
  func_285(23, 0);
}