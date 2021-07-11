// am_lowrider_int.c @ L80416
void func_343()
{
  if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != joaat("mp_f_freemode_01"))
  {
    CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("LOW_INT", 27, 8);
  }
  else
  {
    CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("LOW_INT", 29, 8);
  }
}