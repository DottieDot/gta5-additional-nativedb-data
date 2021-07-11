// fm_mission_controller.c @ L551234
int func_8680(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
  if (func_8698(iParam0, iParam1, 993674639, 0, 0, 0))
  {
    STREAMING::REQUEST_ANIM_DICT(sParam3);
    if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
    {
      TASK::TASK_START_SCENARIO_IN_PLACE(iParam0, sParam2, 0, 0);
      MISC::CLEAR_BIT(&(uLocal_4262[func_751(iParam1)]), func_750(iParam1));
      return 1;
    }
  }
  else if (TASK::_0x621C6E4729388E41(iParam0) && !MISC::IS_BIT_SET(uLocal_4262[func_751(iParam1)], func_750(iParam1)))
  {
    TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(iParam0, sParam4, sParam5);
    MISC::SET_BIT(&(uLocal_4262[func_751(iParam1)]), func_750(iParam1));
  }
  return 0;
}