// maintransition.c @ L175900
void func_2042()
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    TASK::UNCUFF_PED(PLAYER::PLAYER_PED_ID());
    PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
    AUDIO::DISABLE_PED_PAIN_AUDIO(PLAYER::PLAYER_PED_ID(), true);
    PED::_0xE861D0B05C7662B8(PLAYER::PLAYER_PED_ID(), 0, 1);
    OBJECT::_0x31F924B53EADDF65(1);
  }
  func_250(1);
}