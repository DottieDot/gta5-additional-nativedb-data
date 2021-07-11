// am_mp_business_hub.ysc @ L259899
void func_3802(char* sParam0)
{
  int iVar0;
  int iVar1;
  
  AUDIO::FREEZE_RADIO_STATION(sParam0);
  iVar0 = 0;
  if (!Global_1366852)
  {
    iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60);
    iVar0 = iVar1 * 60 * 1000;
  }
  if (func_2322() != func_9())
  {
    if (!Global_1366852 && func_3806(func_2322()))
    {
      iVar0 = func_3805(func_2322());
    }
    else if (func_2322() == PLAYER::PLAYER_ID())
    {
      func_3804(iVar0);
    }
  }
  AUDIO::_SET_RADIO_TRACK_MIX(sParam0, func_3803(MISC::GET_HASH_KEY(sParam0), 1), iVar0);
  AUDIO::UNFREEZE_RADIO_STATION(sParam0);
}