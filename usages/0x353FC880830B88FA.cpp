// agency_heist2.ysc @ L4110
void func_92(var uParam0)
{
  if (uParam0->f_33 != -1)
  {
    AUDIO::STOP_SOUND(uParam0->f_33);
    AUDIO::RELEASE_SOUND_ID(uParam0->f_33);
    uParam0->f_33 = -1;
  }
}