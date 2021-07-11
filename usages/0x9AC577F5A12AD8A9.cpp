// bailbond2.ysc @ L3362
void func_121(int iParam0)
{
  if (func_23(Local_69[iParam0 /*20*/]))
  {
    TASK::CLEAR_PED_SECONDARY_TASK(Local_69[iParam0 /*20*/]);
    TASK::CLEAR_PED_TASKS(Local_69[iParam0 /*20*/]);
    TASK::TASK_CLEAR_LOOK_AT(Local_69[iParam0 /*20*/]);
    PED::SET_PED_HEARING_RANGE(Local_69[iParam0 /*20*/], 30f);
    PED::SET_PED_SEEING_RANGE(Local_69[iParam0 /*20*/], 30f);
    PED::SET_PED_ID_RANGE(Local_69[iParam0 /*20*/], 30f);
    PED::SET_PED_COMBAT_RANGE(Local_69[iParam0 /*20*/], 0);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*20*/], 1, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*20*/], 3, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*20*/], 5, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_69[iParam0 /*20*/], 0, true);
    PED::SET_PED_FLEE_ATTRIBUTES(Local_69[iParam0 /*20*/], 512, true);
    PED::SET_PED_ACCURACY(Local_69[iParam0 /*20*/], MISC::GET_RANDOM_INT_IN_RANGE(10, 20));
    PED::SET_PED_SHOOT_RATE(Local_69[iParam0 /*20*/], MISC::GET_RANDOM_INT_IN_RANGE(15, 20));
    PED::SET_PED_FIRING_PATTERN(Local_69[iParam0 /*20*/], 445831135);
    if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_69[iParam0 /*20*/], ENTITY::GET_ENTITY_COORDS(Local_69[iParam0 /*20*/], true), 45f, 0, 0);
    }
    else
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_69[iParam0 /*20*/], ENTITY::GET_ENTITY_COORDS(Local_69[iParam0 /*20*/], true), 35f, 0, 0);
    }
    TASK::TASK_LOOK_AT_ENTITY(Local_69[iParam0 /*20*/], PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
    TASK::TASK_COMBAT_PED(Local_69[iParam0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[iParam0 /*20*/], false);
    Local_69[iParam0 /*20*/].f_14 = 2;
  }
}