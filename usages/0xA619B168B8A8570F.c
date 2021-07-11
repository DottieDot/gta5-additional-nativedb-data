// am_mp_defunct_base.c @ L284738
void func_4210()
{
  if (Global_1384442 >= 0 && Global_1384442 < AUDIO::GET_NUM_UNLOCKED_RADIO_STATIONS())
  {
    AUDIO::SET_RADIO_TO_STATION_INDEX(Global_1384442);
  }
  else
  {
    AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
  }
}