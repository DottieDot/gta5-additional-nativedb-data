// dialogue_handler.ysc @ L3555
void func_89()
{
  func_90();
  AUDIO::_0x0B568201DD99F0EB(uLocal_68);
  AUDIO::_0x61631F5DF50D1C34(uLocal_69);
  if (Global_21797)
  {
    AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_67);
    iLocal_36 = MISC::GET_GAME_TIMER();
  }
  else
  {
    AUDIO::START_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_67);
  }
  Global_20805 = 4;
}