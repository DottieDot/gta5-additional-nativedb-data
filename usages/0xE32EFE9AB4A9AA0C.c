// exile3.c @ L136004
void func_939(char* sParam0, bool bParam1, bool bParam2)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190, 0))
  {
    func_897(bParam1, bParam2);
    CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_209, iLocal_471, sParam0, func_236(2));
  }
}