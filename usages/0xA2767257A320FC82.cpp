// taxiservice.ysc @ L10041
void func_182()
{
  if (CAM::DOES_CAM_EXIST(iLocal_68))
  {
    func_183(Global_110591, &iLocal_68, vLocal_823);
    CAM::SET_CAM_FOV(iLocal_68, fLocal_74);
    CAM::SET_CAM_NEAR_CLIP(iLocal_68, 0.01f);
    CAM::_0xA2767257A320FC82(iLocal_68, 1);
    CAM::_0x469F2ECDEC046337(1);
  }
}