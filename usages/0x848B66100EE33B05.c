// arena_carmod.c @ L128801
void func_1140(int iParam0, int iParam1, int iParam2, int iParam3)
{
  struct<4> Var0;
  struct<12> Var1;
  
  if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 3))
  {
    if (!func_1150(iParam2, iParam0))
    {
      StringCopy(&Var0, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam2), 16);
      Var1 = iParam0;
      Var1.f_1 = iParam1;
      Var1.f_2 = ENTITY::GET_ENTITY_MODEL(iParam2);
      Var1.f_3 = func_1202(iParam2);
      Var1.f_4 = func_1148(Var0);
      Var1.f_5 = func_1147();
      Var1.f_6 = func_1145();
      Var1.f_7 = func_1218(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
      Var1.f_8 = iParam3;
      Var1.f_9 = func_2508(99, -1);
      Var1.f_10 = 0;
      Var1.f_11 = 0;
      STATS::_PLAYSTATS_DUPE_DETECTION(&Var1);
      func_1141(iParam2, iParam0);
    }
  }
}