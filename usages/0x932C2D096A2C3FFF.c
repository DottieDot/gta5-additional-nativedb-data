// maude_postbailbond.c @ L299
void func_13(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
  bool bVar0;
  
  if (func_51(*iParam0))
  {
    bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(*iParam0);
    if (bVar0)
    {
      AUDIO::STOP_PED_SPEAKING(*iParam0, false);
    }
    func_14(*iParam0, sParam1, sParam2, iParam3);
    if (bVar0)
    {
      AUDIO::STOP_PED_SPEAKING(*iParam0, true);
    }
  }
}