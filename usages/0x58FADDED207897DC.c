// gb_biker_race_p2p.c @ L321590
void func_5074()
{
  func_738(&iLocal_227);
  func_5126(Global_1674861, -1, -1, -1, -1);
  func_5075(1, 0);
  if (iLocal_230 > -1)
  {
    AUDIO::STOP_SOUND(iLocal_230);
    AUDIO::RELEASE_SOUND_ID(iLocal_230);
    iLocal_230 = -1;
  }
  func_409();
  func_707(1);
  HUD::SET_MINIMAP_BLOCK_WAYPOINT(0);
  VEHICLE::_0xE6C0C80B8C867537(0);
  HUD::_0x6CDD58146A436083(0);
  AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("MP_RACES_SLIPSTREAM");
  func_400();
  func_4542();
  func_745(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0);
  func_716();
  Global_1676586 = 0;
  SCRIPT::TERMINATE_THIS_THREAD();
}