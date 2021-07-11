// standard_global_reg.c @ L104589
void func_463(var uParam0, char* sParam1)
{
  char cVar0[64];
  int iVar1;
  
  MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 6, sParam1);
  iVar1 = 0;
  while (iVar1 < *uParam0)
  {
    StringCopy(&cVar0, sParam1, 64);
    StringConCat(&cVar0, "_BestTime_", 64);
    StringIntConCat(&cVar0, iVar1, 64);
    MISC::REGISTER_FLOAT_TO_SAVE(uParam0[iVar1], &cVar0);
    iVar1++;
  }
  MISC::STOP_SAVE_ARRAY();
}