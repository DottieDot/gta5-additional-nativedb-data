// am_mp_arcade_love_meter.ysc @ L88537
void func_585(int iParam0, int iParam1)
{
  struct<13> Var0;
  struct<11> Var1;
  
  Var0 = { func_551(Local_206.f_21) };
  Var1 = Local_204.f_1;
  Var1.f_1 = Local_204.f_1;
  Var1.f_2 = iParam0;
  Var1.f_3 = func_586(3, 5, 0, -1);
  Var1.f_4 = func_586(3, 1, 0, -1);
  Var1.f_5 = func_586(3, 6, 0, -1);
  Var1.f_6 = func_586(3, 4, 0, -1);
  Var1.f_7 = func_586(3, 7, 0, -1);
  Var1.f_8 = func_586(3, 2, 0, -1);
  if (iParam0 == iParam1)
  {
    if (iParam0 == 1 || iParam0 == 0)
    {
      Var1.f_10 = 1;
    }
    if (iParam0 == 10)
    {
      Var1.f_9 = 1;
    }
  }
  STATS::_0x4FCDBD3F0A813C25(&Var0, &Var1);
}