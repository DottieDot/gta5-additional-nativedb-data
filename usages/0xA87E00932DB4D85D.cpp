// finale_heist1.ysc @ L72137
void func_652()
{
  if (iLocal_533)
  {
    if ((MISC::GET_GAME_TIMER() - iLocal_534) > 250)
    {
      fLocal_532 = (fLocal_532 - 0.05f);
      iLocal_534 = MISC::GET_GAME_TIMER();
    }
    if (fLocal_532 > 1f)
    {
      fLocal_532 = 1f;
    }
    if (fLocal_532 <= 0f)
    {
      fLocal_532 = 0f;
      iLocal_533 = 0;
    }
    CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fLocal_532);
  }
}