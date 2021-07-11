// fm_mission_controller.ysc @ L600643
void func_9536(int iParam0)
{
  if (CAM::DOES_CAM_EXIST(iParam0))
  {
    CAM::SET_CAM_MOTION_BLUR_STRENGTH(iParam0, fLocal_7207);
    func_9522(0);
    CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iParam0, fLocal_7211);
    CAM::_SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(iParam0, fLocal_7210);
    CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(iParam0, vLocal_7186.z);
    CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iParam0, fLocal_7212);
    CAM::SET_CAM_DOF_STRENGTH(iParam0, fLocal_7208);
  }
}