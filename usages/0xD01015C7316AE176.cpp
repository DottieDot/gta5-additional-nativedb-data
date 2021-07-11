// tennis.ysc @ L55416
int func_821(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
  if (!PED::IS_PED_INJURED(func_1161(uParam0[iParam1 /*94*/])) && TASK::GET_SCRIPT_TASK_STATUS(func_1161(uParam0[iParam1 /*94*/]), 242628503) != 7)
  {
    return 0;
  }
  else if ((!PED::IS_PED_INJURED(func_1161(uParam0[iParam1 /*94*/])) && ((bParam4 || iParam3 == 4) || iParam3 == 1)) && !func_186(uParam0[iParam1 /*94*/], 8192))
  {
    if (iParam1 == iParam2)
    {
      func_361(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
    }
    func_437(func_1161(uParam0[iParam1 /*94*/]), 1);
    PED::_0x2208438012482A1A(func_1161(uParam0[iParam1 /*94*/]), 0, 0);
    func_353(uParam0[iParam1 /*94*/], 8192);
  }
  else if (func_186(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam2)
  {
    if (!PED::IS_PED_INJURED(func_1161(uParam0[iParam1 /*94*/])) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(func_1161(uParam0[iParam1 /*94*/])))
    {
      if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(func_1161(uParam0[iParam1 /*94*/])), "Intro") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(func_1161(uParam0[iParam1 /*94*/])))
      {
        TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(func_1161(uParam0[iParam1 /*94*/]), "running");
      }
    }
  }
  return 1;
}