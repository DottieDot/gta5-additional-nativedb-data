// fm_mission_controller.ysc @ L629460
void func_10048(int iParam0)
{
  vector3 vVar0;
  float fVar1;
  
  if (!func_49(&iLocal_9563))
  {
    func_313(&iLocal_9563, 0, 0);
  }
  else
  {
    if (func_239(&iLocal_9563, 2000, 0))
    {
      func_2(&iLocal_9563);
      return;
    }
    VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, 5f, 1, 1);
    vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
    fVar1 = (SYSTEM::TO_FLOAT(func_1841(&iLocal_9563, 0, 0)) / 2000f);
    fVar1 = func_2492(fVar1, 0f, 1f);
    ENTITY::SET_ENTITY_ROTATION(iParam0, func_8391(vVar0.x, 0f, fVar1), func_8391(vVar0.y, 0f, fVar1), vVar0.z, 2, 1);
  }
}