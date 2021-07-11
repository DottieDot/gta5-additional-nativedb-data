// am_mp_arcade.ysc @ L319889
void func_4700()
{
  if (MISC::IS_BIT_SET(Local_823, 24))
  {
    return;
  }
  if (!MISC::IS_BIT_SET(Local_823, 15))
  {
    if (func_4702())
    {
      MISC::SET_BIT(&Local_823, 15);
    }
  }
  else if (INTERIOR::IS_VALID_INTERIOR(func_4701()))
  {
    if (INTERIOR::IS_INTERIOR_READY(func_4701()))
    {
      INTERIOR::REFRESH_INTERIOR(func_4701());
      MISC::SET_BIT(&Local_823, 24);
      Global_1316822 = 1;
    }
    else
    {
      func_4702();
    }
  }
}