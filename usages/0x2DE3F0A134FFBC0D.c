// business_battles_sell.c @ L301475
void func_4344()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= 7)
  {
    if (MISC::IS_BIT_SET(iLocal_949, iVar0) || ((iLocal_948[iVar0] != -1 && AUDIO::GET_NETWORK_ID_FROM_SOUND_ID(iLocal_948[iVar0]) != -1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_948[iVar0])))
    {
      AUDIO::STOP_SOUND(iLocal_948[iVar0]);
      AUDIO::RELEASE_SOUND_ID(iLocal_948[iVar0]);
      MISC::CLEAR_BIT(&iLocal_949, iVar0);
      iLocal_948[iVar0] = -1;
    }
    iVar0++;
  }
  if (iLocal_927[1] != -1)
  {
    if (!AUDIO::HAS_SOUND_FINISHED(iLocal_927[1]))
    {
      AUDIO::STOP_SOUND(iLocal_927[1]);
      iLocal_927[1] = -1;
    }
  }
}