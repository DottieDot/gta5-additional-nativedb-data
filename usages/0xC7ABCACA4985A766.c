// mission_triggerer_b.c @ L124872
int func_1059()
{
  if (!MISC::IS_BIT_SET(iLocal_498, 1))
  {
    AUDIO::_0xC8EDE9BDBCCBA6D4("CHINESE_1_INT_LEADIN", 1986.441f, 3052.163f, 46.2152f);
    MISC::SET_BIT(&iLocal_498, 1);
  }
  if (func_677(&(Global_95196.f_209)) && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CHINESE_1_INT_LEADIN", 0))
  {
    return 1;
  }
  return 0;
}