// agency_prep2amb.c @ L5946
void func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
  struct<4> Var0;
  
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
  {
    if (MISC::ARE_STRINGS_EQUAL(&uParam0, Local_44.f_7))
    {
      if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
      {
        if (iLocal_42 == 0)
        {
          Var0 = { func_122(bParam6) };
          func_91(46, 1);
          func_127(sLocal_79, &Var0);
          func_126(1);
        }
        else if (iLocal_42 == 1)
        {
          Var0 = { func_121(bParam6) };
          func_127(sLocal_79, &Var0);
          func_126(1);
        }
        iLocal_40 = 3;
      }
    }
  }
}