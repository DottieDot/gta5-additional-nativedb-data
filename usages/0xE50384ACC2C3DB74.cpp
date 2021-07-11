// am_hunt_the_beast.ysc @ L111796
struct<16> func_540(int iParam0, int iParam1, int iParam2)
{
  var uVar0;
  var uVar1;
  struct<16> Var2;
  char cVar3[32];
  
  uVar0 = Global_2577450[iParam0 /*3*/][func_71(iParam2)];
  uVar1 = Global_2577450[iParam1 /*3*/][func_71(iParam2)];
  StringCopy(&Var2, STATS::STAT_GET_STRING(uVar0, -1), 64);
  StringCopy(&cVar3, STATS::STAT_GET_STRING(uVar1, -1), 32);
  StringConCat(&Var2, &cVar3, 64);
  return Var2;
}