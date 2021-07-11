// am_joyrider.ysc @ L1614
void func_60()
{
  func_63();
  if (func_42() == 4 && Local_93.f_4 != 0)
  {
    VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_93.f_4, false);
  }
  if (func_4(Local_93.f_2))
  {
    AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_93.f_2), 0f);
  }
  AUDIO::STOP_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
  func_62(9, 0);
  func_61();
}