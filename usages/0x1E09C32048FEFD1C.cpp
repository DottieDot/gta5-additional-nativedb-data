// am_penned_in.ysc @ L1642
void func_5(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
  int iVar0;
  
  if (!func_24(&(uParam0->f_8)))
  {
    func_397(&(uParam0->f_8), 0, 0);
  }
  else if (func_23(&(uParam0->f_8), 5000, 0))
  {
    func_22(&(uParam0->f_8));
    iVar0 = 1;
  }
  if ((!PED::IS_PED_INJURED(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2, 0)) && !PED::IS_PED_INJURED(iParam3))
  {
    if (((TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 0) || iParam3 != uParam0->f_4) || iVar0)
    {
      if (iParam3 != uParam0->f_4)
      {
        uParam0->f_4 = iParam3;
        TASK::CLEAR_PED_TASKS(iParam1);
      }
      TASK::TASK_VEHICLE_HELI_PROTECT(iParam1, iParam2, iParam3, fParam4, 32, fParam5, iParam6, iParam7);
    }
  }
}