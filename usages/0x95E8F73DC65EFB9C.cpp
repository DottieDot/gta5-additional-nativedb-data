// am_pi_menu.ysc @ L233771
int func_2155(int iParam0, var uParam1)
{
  if (iParam0 == PLAYER::PLAYER_PED_ID() && PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
  {
    return 0;
  }
  if (TASK::GET_IS_TASK_ACTIVE(iParam0, 1))
  {
    return 0;
  }
  if (PED::GET_PED_PARACHUTE_STATE(iParam0) == 1 || PED::GET_PED_PARACHUTE_STATE(iParam0) == 2)
  {
    return 0;
  }
  if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
  {
    if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
    {
      return 0;
    }
  }
  return 1;
}