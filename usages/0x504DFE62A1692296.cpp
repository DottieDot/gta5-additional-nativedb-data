// am_mp_hacker_truck.ysc @ L270619
void func_3981()
{
  if (!func_185())
  {
    if (!func_186(PLAYER::PLAYER_ID()) && (func_4039(PLAYER::PLAYER_ID(), 0) || func_1002(PLAYER::PLAYER_ID())))
    {
      HUD::_0x504DFE62A1692296(1);
    }
    else
    {
      HUD::_0x504DFE62A1692296(0);
    }
  }
}