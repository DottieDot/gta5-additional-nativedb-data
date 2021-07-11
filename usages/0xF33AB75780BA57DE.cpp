// am_armwrestling.ysc @ L5858
int func_52(var uParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  
  if (CAM::DOES_CAM_EXIST(*uParam0))
  {
    vVar0 = { CAM::GET_CAM_COORD(*uParam0) };
    vVar1 = { CAM::GET_CAM_ROT(*uParam0, 2) };
    fVar2 = CAM::GET_CAM_FOV(*uParam0);
    CAM::STOP_CAM_POINTING(*uParam0);
    CAM::SET_CAM_PARAMS(*uParam0, vVar0, vVar1, (fVar2 - 3f), 0, 1, 1, 2);
    CAM::SET_CAM_PARAMS(*uParam0, vVar0, vVar1, fVar2, 1500, 0, 0, 2);
    func_53(uParam0, 0.3f);
    return 1;
  }
  return 0;
}