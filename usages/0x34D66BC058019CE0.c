// nightclubpeds.c @ L51146
int func_470(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (iParam0 == -1)
  {
    return 0;
  }
  iVar0 = AUDIO::_0x3E65CDE5215832C1(AUDIO::GET_RADIO_STATION_NAME(iParam0));
  iVar1 = 1;
  iVar2 = MISC::GET_HASH_KEY(func_237(MISC::GET_HASH_KEY(AUDIO::GET_RADIO_STATION_NAME(iParam0)), iVar1));
  while (iVar2 != AUDIO::_0x34D66BC058019CE0(AUDIO::GET_RADIO_STATION_NAME(iParam0)) && func_236(iVar2) != -1)
  {
    iVar0 = (iVar0 + (func_236(iVar2) - 1000));
    iVar1++;
    iVar2 = MISC::GET_HASH_KEY(func_237(MISC::GET_HASH_KEY(AUDIO::GET_RADIO_STATION_NAME(iParam0)), iVar1));
  }
  return iVar0;
}