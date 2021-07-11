// act_cinema.c @ L74861
int func_339(int iParam0)
{
  if (((((iParam0 == joaat("BLAZER") || iParam0 == joaat("SANCHEZ")) || iParam0 == joaat("SANCHEZ2")) || iParam0 == joaat("BLAZER5")) || iParam0 == joaat("formula")) || iParam0 == joaat("formula2"))
  {
    return 1;
  }
  if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
  {
    return 1;
  }
  return 0;
}