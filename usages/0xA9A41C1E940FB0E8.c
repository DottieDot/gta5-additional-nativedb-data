// am_mp_smpl_interior_ext.c @ L238990
void func_3536(bool bParam0)
{
  if (func_83(PLAYER::PLAYER_PED_ID()))
  {
    AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), !bParam0);
    AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), !bParam0);
  }
}