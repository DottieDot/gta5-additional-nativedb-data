// act_cinema.ysc @ L3618
void func_79(float fParam0, int iParam1)
{
  vector3 vVar0;
  
  if (!func_80() || iParam1)
  {
    if (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
    {
      if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
      {
        vVar0 = { func_89(PLAYER::PLAYER_ID()) };
        if (vVar0.z > -80f)
        {
          CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
          CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
        }
      }
    }
  }
}