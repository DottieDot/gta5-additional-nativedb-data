// fm_mission_controller.ysc @ L682512
int func_11170()
{
  float fVar0;
  float fVar1;
  
  fVar0 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
  fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
  if (fVar0 < -25f && fVar1 < -25f)
  {
    return 0;
  }
  if (fVar0 > 25f && fVar1 < -25f)
  {
    return 1;
  }
  if (fVar0 > 25f && fVar1 > 25f)
  {
    return 2;
  }
  if (fVar0 < -25f && fVar1 > 25f)
  {
    return 3;
  }
  return 4;
}