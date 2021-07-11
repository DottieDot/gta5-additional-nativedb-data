// assassin_bus.c @ L11359
void func_179()
{
  if (!iLocal_1408)
  {
    if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
    {
      if (!func_168(&iLocal_1492))
      {
        func_183(&iLocal_1492);
      }
      else if (func_180(&iLocal_1492, 10f))
      {
        AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ASS_BUS_01", 0f);
        iLocal_1408 = 1;
      }
    }
  }
}