// am_mp_yacht.ysc @ L124408
void func_929(bool bParam0)
{
  bool bVar0;
  char* sVar1;
  char* sVar2;
  
  bVar0 = func_246();
  if (func_89(PLAYER::PLAYER_ID()) == func_44(PLAYER::PLAYER_ID(), 0))
  {
    sVar1 = "CAPTAIN_HI";
    sVar2 = func_930(3);
  }
  else if (bVar0)
  {
    sVar1 = "GENERIC_HI_FEMALE";
    sVar2 = func_930(3);
  }
  else
  {
    sVar1 = "GENERIC_HI_MALE";
    sVar2 = func_930(3);
  }
  if (bParam0)
  {
    AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_710);
  }
  AUDIO::_PLAY_AMBIENT_SPEECH1(iLocal_710, sVar1, sVar2, 0);
}