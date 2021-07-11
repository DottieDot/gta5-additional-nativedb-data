// am_casino_peds.ysc @ L228227
int func_2215()
{
  if (func_2216(PLAYER::PLAYER_PED_ID()) && (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) >= 0))
  {
    return 1;
  }
  return 0;
}