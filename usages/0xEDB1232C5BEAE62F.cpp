// standard_global_reg.ysc @ L104548
void func_461(var uParam0, char* sParam1)
{
  char cVar0[64];
  
  MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 8, sParam1);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, "_Name", 64);
  MISC::REGISTER_TEXT_LABEL_TO_SAVE(uParam0, &cVar0);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, "_Status", 64);
  MISC::REGISTER_ENUM_TO_SAVE(&(uParam0->f_4), &cVar0);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, "_Goals", 64);
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), &cVar0);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, "_PreReq", 64);
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), &cVar0);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, "_MedalScore", 64);
  MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), &cVar0);
  MISC::STOP_SAVE_STRUCT();
}