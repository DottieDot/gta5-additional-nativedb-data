// fm_mission_controller.ysc @ L793936
void func_12950()
{
  int iVar0;
  
  if (func_492())
  {
    func_7308(1);
    Global_1676879.f_3108 = 1;
    if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1073, 0))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1073, 0);
      if (func_382(iVar0))
      {
        VEHICLE::_SET_VEHICLE_BOMB_COUNT(iVar0, 0);
      }
    }
  }
}