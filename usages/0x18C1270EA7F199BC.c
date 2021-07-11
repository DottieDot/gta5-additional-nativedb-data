// am_casino_limo.c @ L16038
void func_315(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
  bool bVar0;
  
  if (!iParam0->f_386)
  {
    return;
  }
  if (!bParam2)
  {
    func_346(iParam0);
  }
  if (bParam3)
  {
    func_317(1, 0, bParam4, bParam5);
  }
  bVar0 = SCRIPT::GET_NO_LOADING_SCREEN();
  if (!bParam1)
  {
    func_297(PLAYER::PLAYER_ID(), 1, 524288, 0);
  }
  if (SCRIPT::GET_NO_LOADING_SCREEN() != bVar0)
  {
    SCRIPT::SET_NO_LOADING_SCREEN(bVar0);
  }
  func_316(iParam0);
  MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_555), 0);
  Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_555.f_1 = 0;
}