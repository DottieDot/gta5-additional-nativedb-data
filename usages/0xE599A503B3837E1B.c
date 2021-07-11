// benchmark.c @ L326
void func_2()
{
  float fVar0;
  int iVar1;
  
  if (func_4("BMARK_EXIT"))
  {
    fLocal_44[iLocal_43] = (1f / MISC::_GET_BENCHMARK_TIME());
    iLocal_43++;
    if (iLocal_43 == 10)
    {
      iLocal_43 = 0;
      fVar0 = 0f;
      iVar1 = 0;
      iVar1 = 0;
      while (iVar1 < 10)
      {
        fVar0 = (fVar0 + fLocal_44[iVar1]);
        iVar1++;
      }
      fLocal_42 = (fVar0 / 10f);
    }
    if (fLocal_42 > 0f)
    {
      HUD::SET_TEXT_JUSTIFICATION(0);
      HUD::SET_TEXT_OUTLINE();
      func_3(fLocal_48, fLocal_49, "BMARK_FPS", fLocal_42, 1);
    }
  }
}