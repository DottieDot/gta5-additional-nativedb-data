// standard_global_reg.c @ L103683
void func_428(var uParam0, char* sParam1)
{
  int iVar0;
  char cVar1[32];
  
  iVar0 = 0;
  MISC::START_SAVE_ARRAY_WITH_SIZE(uParam0, 35, sParam1);
  iVar0 = 0;
  while (iVar0 < 34)
  {
    StringCopy(&cVar1, "RAND_EVENT_Time", 32);
    StringIntConCat(&cVar1, iVar0, 32);
    MISC::REGISTER_ENUM_TO_SAVE(uParam0[iVar0], &cVar1);
    iVar0++;
  }
  MISC::STOP_SAVE_ARRAY();
}