// finale_heist_prepc.ysc @ L10526
int func_199(struct<16> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
  if (func_4(iLocal_122))
  {
    if (MISC::IS_AREA_OCCUPIED(Param0.f_15[0 /*3*/], Param0.f_15[1 /*3*/], 0, 1, 1, 0, 0, 0, 0))
    {
      return 1;
    }
  }
  return 0;
}