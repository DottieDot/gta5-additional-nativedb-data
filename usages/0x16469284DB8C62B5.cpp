// exile3.ysc @ L125480
void func_775(int iParam0)
{
  vector3 vVar0;
  
  vVar0 = { func_778(iParam0) };
  func_751(iParam0);
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190, 0))
  {
    VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_190, vVar0);
    VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_190, fLocal_432);
    VEHICLE::SET_TRAIN_SPEED(iLocal_190, fLocal_432);
  }
}