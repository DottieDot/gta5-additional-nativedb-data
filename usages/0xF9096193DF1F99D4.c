// am_mp_arcade_claw_crane.c @ L732
void func_29()
{
  struct<10> Var0;
  
  Var0.f_8 = func_31(Local_206.f_93);
  Var0 = 521268843;
  Var0.f_2 = 1;
  Var0.f_6 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_206.f_100));
  if (func_30(PLAYER::PLAYER_ID()))
  {
    Var0.f_9 = 1;
  }
  STATS::_0xF9096193DF1F99D4(&Var0);
}