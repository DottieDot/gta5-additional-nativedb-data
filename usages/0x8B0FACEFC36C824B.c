// achievement_controller.c @ L8021
struct<7> func_51(int iParam0)
{
  var uVar0;
  struct<7> Var1;
  struct<7> Var2;
  
  uVar0 = iParam0;
  if (STATS::STAT_GET_DATE(uVar0, &Var2, 7, -1))
  {
    return Var2;
  }
  return Var1;
}