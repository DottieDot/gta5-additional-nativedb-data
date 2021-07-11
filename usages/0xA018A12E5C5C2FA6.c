// taxi_clowncar.c @ L12422
void func_344(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
  func_267(uParam0, 16, 0, 0);
  func_267(uParam0, 17, 0f, 1);
  StringConCat(&cParam1, sParam5, 24);
  if (!PED::IS_PED_INJURED(uParam0->f_3))
  {
    AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_345(uParam0));
  }
}