// finale_heist2a.c @ L118911
void func_717(int iParam0, vector3 vParam1, float fParam2)
{
  int iVar0;
  int iVar1;
  
  if (PED::CAN_CREATE_RANDOM_DRIVER())
  {
    MISC::CLEAR_AREA(vParam1, 2f, 1, 0, 0, false);
    iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, vParam1, fParam2, true, true, false);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
    iVar1 = PED::CREATE_RANDOM_PED_AS_DRIVER(iVar0, 1);
    TASK::TASK_VEHICLE_MISSION(iVar1, iVar0, 0, 1, 15f, 786603, 5f, 5f, 1);
    PED::SET_PED_KEEP_TASK(iVar1, true);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 15f);
    ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
    ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
  }
}