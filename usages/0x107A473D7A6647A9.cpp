// fm_mission_controller.ysc @ L761101
void func_12488(int iParam0, int iParam1, int iParam2, vector3 vParam3)
{
  float fVar0;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  
  func_12520(iParam0, iParam2);
  if (func_8698(iParam0, iParam2, -1273030092, 0, 19, iParam1))
  {
    fVar0 = 5f;
    fVar1 = 5f;
    fVar2 = -1f;
    iVar3 = 0;
    iVar4 = 0;
    fVar5 = -1f;
    iVar6 = 8224;
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
    TASK::TASK_HELI_MISSION(iParam0, iParam1, 0, 0, vParam3, 19, fVar0, fVar1, fVar2, iVar3, iVar4, fVar5, iVar6);
  }
  else
  {
    VEHICLE::_0x107A473D7A6647A9(iParam1);
  }
}