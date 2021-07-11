// act_cinema.c @ L96508
int func_595(int iParam0)
{
  if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
  {
    return 1;
  }
  return 0;
}