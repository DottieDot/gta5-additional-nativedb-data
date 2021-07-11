// fm_mission_controller.ysc @ L759591
void func_12461(int iParam0, int iParam1, vector3 vParam2)
{
  float fVar0;
  
  if (func_8698(iParam0, iParam1, 688521916, 0, 0, 0))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
    WEAPON::SET_CURRENT_PED_WEAPON(iParam0, WEAPON::GET_BEST_PED_WEAPON(iParam0, 0), true);
    if (MISC::IS_BIT_SET(Global_4456448.f_101961[iParam1 /*493*/].f_267, 9))
    {
      fVar0 = 1f;
    }
    else
    {
      fVar0 = 2f;
    }
    if (MISC::IS_BIT_SET(Global_4456448.f_101961[iParam1 /*493*/].f_269, 10) && MISC::IS_BIT_SET(Local_4814.f_1480[func_751(iParam1)], func_750(iParam1)))
    {
      fVar0 = 3f;
    }
    if (iParam1 > -1)
    {
    }
    TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(iParam0, vParam2, vParam2, fVar0, true, 0.5f, 4f, true, 0, 0, -957453492);
    MISC::SET_BIT(&(uLocal_4247[func_751(iParam1)]), func_750(iParam1));
  }
}