// am_mp_garage_control.c @ L337
int func_4(struct<8> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26)
{
  if (Param0.f_7 != 0)
  {
    if (!OBJECT::IS_GARAGE_EMPTY(Param0.f_1, 1, 2) || !OBJECT::IS_GARAGE_EMPTY(Param0.f_1, 1, 3))
    {
      return 0;
    }
  }
  else if (!OBJECT::IS_GARAGE_EMPTY(Param0.f_1, 1, 2))
  {
    return 0;
  }
  return 1;
}