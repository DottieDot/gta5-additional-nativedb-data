// am_mp_arena_garage.c @ L328288
void func_4851()
{
  switch (Local_378.f_380)
  {
    case 0:
      AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_AW_xs_x18_int_mod_garage_radio", true);
      if (func_4579(Local_378.f_363))
      {
        AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_AW_xs_arena_VIP_Radio", true);
      }
      AUDIO::SET_EMITTER_RADIO_STATION("SE_DLC_AW_xs_x18_int_mod_garage_radio", "RADIO_22_DLC_BATTLE_MIX1_RADIO");
      break;
    
    case 1:
    case 2:
      AUDIO::SET_STATIC_EMITTER_ENABLED("SE_DLC_AW_xs_x18_int_mod2_garage_radio", true);
      break;
  }
}