// nigel1a.c @ L47192
void func_506(bool bParam0)
{
  int iVar0;
  
  STREAMING::REMOVE_ANIM_DICT("rcmnigel1a");
  STREAMING::REMOVE_ANIM_DICT(&cLocal_304);
  STREAMING::REMOVE_ANIM_DICT(&cLocal_309);
  STREAMING::REMOVE_ANIM_DICT(&cLocal_314);
  AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
  AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_300.f_1);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_299.f_1);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_298.f_11);
  iVar0 = 0;
  while (iVar0 <= 4)
  {
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_297[iVar0 /*19*/].f_11);
    iVar0++;
  }
  if (INTERIOR::IS_INTERIOR_READY(iLocal_122))
  {
    STREAMING::SET_INTERIOR_ACTIVE(iLocal_122, 0);
    INTERIOR::UNPIN_INTERIOR(iLocal_122);
  }
  if (bParam0)
  {
    HUD::CLEAR_ADDITIONAL_TEXT(0, true);
  }
}