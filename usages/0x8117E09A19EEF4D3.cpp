// arena_carmod.ysc @ L136713
int func_1166(int iParam0)
{
  struct<6> Var0;
  struct<7> Var1;
  int iVar2;
  
  if (Global_2531497.f_4886)
  {
    return Global_2531497.f_4887;
  }
  CLOCK::GET_UTC_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
  Var1 = { func_1167(iParam0) };
  if (Var1 != 0)
  {
    iVar2 = func_1179(&Var1, &Var0);
    if (iVar2 < Global_262145.f_10210)
    {
      return 1;
    }
  }
  return 0;
}