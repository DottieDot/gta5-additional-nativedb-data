// agency_heist3a.ysc @ L127972
void func_842()
{
  if (AUDIO::HAS_SOUND_FINISHED(iLocal_2129))
  {
    AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2129, "Gasmask", PLAYER::PLAYER_PED_ID(), "FBI_HEIST_RAID", false, 0);
  }
}