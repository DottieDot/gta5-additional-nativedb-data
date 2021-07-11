// chop.c @ L3932
void func_63()
{
  if (iLocal_372 > -1 && (MISC::GET_GAME_TIMER() - iLocal_54) > iLocal_55)
  {
    if (((AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 7 || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 8) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 9) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 13)
    {
      func_64();
      iLocal_54 = MISC::GET_GAME_TIMER();
      iLocal_55 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000);
    }
  }
}