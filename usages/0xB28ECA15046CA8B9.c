// am_mp_armory_aircraft.c @ L238167
void func_3410()
{
  if (Local_578.f_7 == PLAYER::PLAYER_ID())
  {
    if (!func_1103(15475, -1, -1))
    {
      Local_577[PLAYER::PLAYER_ID() /*10*/].f_9 = -1;
    }
    else if (Local_577[PLAYER::PLAYER_ID() /*10*/].f_9 != Global_1366578)
    {
      Local_577[PLAYER::PLAYER_ID() /*10*/].f_9 = Global_1366578;
    }
  }
  if (Local_578.f_7 != func_10())
  {
    if (Local_578.f_1217 != Local_577[Local_578.f_7 /*10*/].f_9)
    {
      Local_578.f_1217 = Local_577[Local_578.f_7 /*10*/].f_9;
      if (Local_578.f_1217 != -1)
      {
        AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_01_avngr_radio", true);
        AUDIO::SET_EMITTER_RADIO_STATION("se_xm_int_01_avngr_radio", AUDIO::GET_RADIO_STATION_NAME(Local_578.f_1217));
      }
      else
      {
        AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_01_avngr_radio", false);
      }
    }
  }
}