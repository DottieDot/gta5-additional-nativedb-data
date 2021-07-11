// abigail1.ysc @ L38687
void func_293()
{
  AUDIO::RESTART_SCRIPTED_CONVERSATION();
  Global_21816 = 0;
  if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
  {
    AUDIO::STOP_SCRIPTED_CONVERSATION(false);
    Global_20805 = 6;
    Global_19486.f_1 = 3;
    return;
  }
  if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
  {
    AUDIO::STOP_SCRIPTED_CONVERSATION(true);
    Global_20805 = 6;
    return;
  }
}