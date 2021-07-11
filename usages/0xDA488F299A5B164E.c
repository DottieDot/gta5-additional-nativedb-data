// achievement_controller.c @ L7497
int func_27()
{
  struct<7> Var0;
  struct<7> Var1;
  
  CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
  Var1 = { func_51(joaat("MPPLY_STARTED_MP")) };
  if (func_28(Var1, Var0, 7))
  {
    return 1;
  }
  return 0;
}