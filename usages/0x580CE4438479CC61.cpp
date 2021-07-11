// am_mp_defunct_base.ysc @ L289409
void func_4365(int iParam0)
{
  if ((func_4651() == 1 && func_4650() != 3) || iParam0)
  {
    if (NETWORK::NETWORK_CAN_BAIL())
    {
      if (func_4108() && !func_558(PLAYER::PLAYER_ID()))
      {
        func_4217(2);
      }
      else
      {
        CAM::DO_SCREEN_FADE_OUT(0);
        MISC::SET_BIT(&(Global_2359302.f_1), 0);
        NETWORK::NETWORK_BAIL(15, 0, 0);
      }
    }
  }
}