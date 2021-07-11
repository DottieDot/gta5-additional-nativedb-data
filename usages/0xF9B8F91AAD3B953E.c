// rampage1.c @ L885
int func_5(int iParam0, struct<6> Param1, int iParam2, int iParam3)
{
  if (iParam3 == 1)
  {
    if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_280.f_27[0], Param1.f_2, 1))
    {
      return 0;
    }
  }
  if (!func_6(iParam0, Param1.f_2, Param1.f_5, iParam2))
  {
    return 0;
  }
  if (Param1.f_1 == 1)
  {
    TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, 0);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, 0);
    TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, 0);
    PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, false);
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Param1.f_2, 2f, 0, 0);
    PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 0);
  }
  else
  {
    TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, 1);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, 1);
    TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, 1);
    PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 25f), 0);
  }
  TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
  PED::SET_PED_MONEY(*iParam0, 0);
  return 1;
}