// agency_heist3a.c @ L139244
void func_1011()
{
  STREAMING::_0xA76359FC80B2438E(1f);
  fLocal_2542 = (fLocal_2542 + (MISC::GET_FRAME_TIME() * 1000f));
  if (fLocal_2542 < 0f)
  {
    fLocal_2542 = 0f;
  }
  STREAMING::SET_SRL_TIME(fLocal_2542);
}