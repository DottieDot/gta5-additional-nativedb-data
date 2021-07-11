// fm_mission_controller.ysc @ L554926
int func_8814(int iParam0)
{
  if (MISC::IS_BIT_SET(Global_4456448.f_156055[iParam0 /*111*/].f_15, 22))
  {
    if (!PED::IS_PED_INJURED(iLocal_1072))
    {
      if ((PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(iLocal_1072) || func_49(&(Local_707[iLocal_690 /*2*/]))) && MISC::IS_BIT_SET(Global_4456448.f_156055[iParam0 /*111*/].f_15, 23))
      {
        return 1;
      }
      else if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_1072, 0) || func_49(&(Local_707[iLocal_690 /*2*/]))) && !MISC::IS_BIT_SET(Global_4456448.f_156055[iParam0 /*111*/].f_15, 23))
      {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}