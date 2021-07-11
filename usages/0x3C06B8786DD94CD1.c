// fm_mission_controller.c @ L761939
void func_12508(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
  if ((!PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iParam0, 0) || !func_1343(PED::GET_PED_DEFENSIVE_AREA_POSITION(iParam0, 0), vParam2, 1056964608, 0)) || PED::GET_PED_COMBAT_MOVEMENT(iParam0) != 1)
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
    if (fParam3 > 0.75f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam2, fParam3, 1, 0);
    }
    else
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam2, 0.75f, 1, 0);
    }
    PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 4, true);
  }
  if (func_8698(iParam0, iParam1, -1442466670, 0, 0, 0) && !PED::IS_PED_IN_COMBAT(iParam0, 0))
  {
    if ((!func_12510(iParam1) || func_12509(iParam1)) || MISC::IS_BIT_SET(Global_4456448.f_101961[iParam1 /*493*/].f_272, 15))
    {
      TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 299f, 0);
      MISC::CLEAR_BIT(&(uLocal_4247[func_751(iParam1)]), func_750(iParam1));
    }
  }
}