// am_car_mod_tut.c @ L4230
int func_117(char* sParam0)
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return 0;
  }
  if (!func_29())
  {
    return 0;
  }
  if (Global_1312585 == 11)
  {
    if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
    {
      return 0;
    }
  }
  else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
  {
    return 0;
  }
  return func_118(sParam0);
}