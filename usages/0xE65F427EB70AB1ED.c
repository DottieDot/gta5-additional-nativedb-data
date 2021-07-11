// agency_heist2.c @ L791
int func_3()
{
  if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_82, true)) < (1.5f * 1.5f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && ENTITY::GET_ENTITY_SPEED(iLocal_82) < 0.1f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_HEIST_H2_ARCHITECT_GRAB_CASE", iLocal_82, 0, false, 0);
    if (HUD::DOES_BLIP_EXIST(iLocal_72))
    {
      RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
      HUD::REMOVE_BLIP(&iLocal_72);
    }
    iLocal_113 = 1;
    return 1;
  }
  return 0;
}