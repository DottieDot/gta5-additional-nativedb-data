// agency_prep2amb.ysc @ L6265
void func_139()
{
  int iVar0;
  
  func_223();
  func_209();
  func_175();
  func_109();
  func_174();
  if (func_170())
  {
    if (func_140(&iVar0))
    {
      func_265(0);
      if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
      {
        TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
      }
      if (func_85(iLocal_51))
      {
        VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_51, 2);
      }
      func_78(iVar0, 0);
    }
  }
}