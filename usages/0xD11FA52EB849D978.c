// am_mp_arcade_peds.c @ L6179
void func_180()
{
  if (AUDIO::IS_STREAM_PLAYING())
  {
    AUDIO::STOP_STREAM();
  }
  Global_1316817 = 0;
  Global_1316821 = 0;
  Global_1316825 = -1;
  func_162();
  func_182();
  func_181();
}