// maintransition.c @ L120293
void func_916(int iParam0)
{
  int iVar0;
  
  func_872(0, 1, 1, iParam0);
  iVar0 = 0;
  while (iVar0 <= 2)
  {
    func_37(1, iVar0);
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 <= 2)
  {
    STATS::STAT_SAVE(iVar0, 0, 0, 0);
    iVar0++;
  }
  if (func_899())
  {
    func_4235(4);
    func_4227(3);
  }
}