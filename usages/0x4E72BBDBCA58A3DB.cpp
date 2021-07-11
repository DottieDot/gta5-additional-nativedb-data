// am_rollercoaster.ysc @ L7146
void func_209(int iParam0, var uParam1)
{
  struct<6> Var0;
  
  Var0 = 850138810;
  Var0.f_1 = PLAYER::PLAYER_ID();
  Var0.f_2 = Global_2538451;
  Var0.f_3 = Global_2538452;
  Var0.f_4 = AUDIO::GET_STREAM_PLAY_TIME();
  Var0.f_5 = uParam1;
  if (!iParam0 == 0)
  {
    SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
  }
}