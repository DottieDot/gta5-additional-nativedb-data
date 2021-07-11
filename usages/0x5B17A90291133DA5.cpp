// carsteal2.ysc @ L141237
void func_995()
{
  char* sVar0;
  int iVar1;
  
  iLocal_1579 = 0;
  iVar1 = 0;
  while (iVar1 < 17)
  {
    sVar0 = func_237(iVar1);
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
    {
      AUDIO::CANCEL_MUSIC_EVENT(sVar0);
    }
    iVar1++;
  }
}