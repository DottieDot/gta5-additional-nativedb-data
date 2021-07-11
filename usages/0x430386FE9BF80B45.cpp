// agency_heist2.ysc @ L4188
void func_98(var uParam0)
{
  if (uParam0->f_33 == -1)
  {
    uParam0->f_33 = AUDIO::GET_SOUND_ID();
    if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
    {
      AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_33, "FREIGHT_ELEVATOR_02_MOTOR", *uParam0, 0, false, 0);
    }
  }
}