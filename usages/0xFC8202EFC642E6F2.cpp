// act_cinema.ysc @ L99683
int func_649(int iParam0)
{
  if ((MISC::GET_FRAME_COUNT() % 5) == 0)
  {
  }
  if (!Global_2405071.f_2654 == -1)
  {
    if (MISC::IS_BIT_SET(Global_2405071.f_2655, iParam0))
    {
      return 1;
    }
  }
  return 0;
}