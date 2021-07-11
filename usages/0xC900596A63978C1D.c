// abigail1.c @ L29955
void func_161(int iParam0, int iParam1, int iParam2)
{
  struct<4> Var0;
  char* sVar1;
  
  if (iParam0 != -1)
  {
    func_163(iParam0, &Var0);
    MemCopy(&sVar1, {func_158(iParam0)}, 4);
    STATS::PLAYSTATS_MISSION_CHECKPOINT(&sVar1, 0, Global_98706, 0);
    func_162(&sVar1, Var0.f_3, Global_98706, iParam1, iParam2);
  }
}