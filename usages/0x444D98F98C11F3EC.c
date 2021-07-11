// am_vehicle_spawn.c @ L273677
int func_4194(int iParam0, int iParam1)
{
  MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
  return func_4195(iParam1, MISC::GET_RANDOM_INT_IN_RANGE(0, func_4196(func_4200(iParam0), iParam1)));
}