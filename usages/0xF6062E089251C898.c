// gb_gunrunning.c @ L41636
void func_728(int iParam0, int iParam1)
{
  struct<6> Var0;
  struct<6> Var1;
  
  AUDIO::STOP_PED_SPEAKING(iParam1, true);
  AUDIO::DISABLE_PED_PAIN_AUDIO(iParam1, true);
  PED::SET_PED_MONEY(iParam1, 0);
  if (func_600())
  {
    PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, 0);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
    ENTITY::SET_ENTITY_VISIBLE(iParam1, false, 0);
    ENTITY::SET_ENTITY_ALPHA(iParam1, 0, false);
    PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
    PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
    PED::SET_PED_CONFIG_FLAG(iParam1, 281, true);
    PED::SET_PED_CONFIG_FLAG(iParam1, 118, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 58, true);
    PED::SET_PED_CAN_RAGDOLL(iParam1, 0);
    ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 5000);
    ENTITY::SET_ENTITY_HEALTH(iParam1, 5000, 0);
    Var0 = { func_729(func_730(15), func_730(31), func_730(23), func_730(29)) };
    AUDIO::SET_AMBIENT_VOICE_NAME(iParam1, &Var0);
    Var0 = { func_729(func_730(30), func_730(27), func_730(25), func_730(16)) };
    Var1 = { func_729(func_730(14), func_730(23), func_730(29), func_730(20)) };
    AUDIO::PLAY_SOUND_FROM_ENTITY(-1, &Var0, iParam1, &Var1, false, 0);
    MISC::FORCE_LIGHTNING_FLASH();
    func_107(iParam0, 94);
  }
}