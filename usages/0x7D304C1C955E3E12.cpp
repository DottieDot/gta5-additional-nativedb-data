// act_cinema.ysc @ L1770
void func_32()
{
  vector3 vVar0;
  
  vVar0 = { func_33(Local_217.f_1, 60f) };
  TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 1000, 0, 2);
}

Vector3 func_33(vector3 vParam0, float fParam1)
{
  vector3 vVar0;
  
  vVar0 = { 0f, 1f, 0f };
  func_34(&vVar0, CAM::GET_CAM_ROT(Local_217, 2));
  vVar0.x = (vVar0.x * fParam1);
  vVar0.y = (vVar0.y * fParam1);
  vVar0.z = (vVar0.z * fParam1);
  vVar0 = { vVar0 + vParam0 };
  return vVar0;
}