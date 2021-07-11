// re_prisonerlift.ysc @ L4019
void func_90()
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
  {
    if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_69, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_69, -1, 0))
    {
      AUDIO::_0x9D3AF56E94C9AE98(iLocal_69, 60000f);
      AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_69);
    }
  }
}