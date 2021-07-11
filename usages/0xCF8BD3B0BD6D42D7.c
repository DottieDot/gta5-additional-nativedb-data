// stripclub.c @ L3229
void func_121(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
  bParam4 = false;
  if ((func_1038() || iParam3) && !bParam4)
  {
    NETWORK::_NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(*iParam0, sParam1, sParam2);
  }
  else
  {
    CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_152, *iParam0, sParam2, sParam1);
    CAM::SET_CAM_ACTIVE(iLocal_152, true);
  }
  func_122(iLocal_152);
  func_1028(&uLocal_191, 262144);
}