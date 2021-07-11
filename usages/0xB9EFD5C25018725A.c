// am_boat_taxi.c @ L5356
void func_130()
{
  AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 0);
  if (func_3(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2)) && !func_131(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_95.f_2), -1))
    {
      AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 1);
    }
  }
}