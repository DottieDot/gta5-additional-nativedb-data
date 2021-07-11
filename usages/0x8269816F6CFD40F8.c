// startup.c @ L331
void func_6(var uParam0, int iParam1)
{
  char cVar0[32];
  
  StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
  StringIntConCat(&cVar0, iParam1, 32);
  MISC::START_SAVE_ARRAY_WITH_SIZE(&(uParam0->f_10801.f_6), 9, &cVar0);
  MISC::_0x8269816F6CFD40F8(&(uParam0->f_10801.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
  MISC::STOP_SAVE_ARRAY();
}