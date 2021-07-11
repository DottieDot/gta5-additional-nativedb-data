// fm_mission_controller.c @ L761262
void func_12494(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam4)
{
  if (!bParam4)
  {
    if (func_8698(iParam0, iParam1, -1273030092, 0, 19, iParam2))
    {
      TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam2, vParam3, 19, 20f, 786468, -1f, -1f, 1);
      MISC::SET_BIT(&(uLocal_4247[func_751(iParam1)]), func_750(iParam1));
    }
  }
  else if (func_8698(iParam0, iParam1, 71191126, 0, 0, 0))
  {
    TASK::TASK_PLANE_LAND(iParam0, iParam2, vParam3, vParam3 + Vector(0f, 0f, 100f));
    MISC::SET_BIT(&(uLocal_4247[func_751(iParam1)]), func_750(iParam1));
  }
}