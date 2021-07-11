// am_mp_defunct_base.ysc @ L284832
void func_4214(int iParam0)
{
  if (iParam0 == 1)
  {
    if (!MISC::IS_BIT_SET(Global_2359302.f_1, 3))
    {
      PLAYER::_0x2F7CEB6520288061(1);
      AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", 1);
      AUDIO::SET_MOBILE_PHONE_RADIO_STATE(1);
      AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 1);
      MISC::SET_BIT(&(Global_2359302.f_1), 3);
    }
  }
  else if (MISC::IS_BIT_SET(Global_2359302.f_1, 3))
  {
    PLAYER::_0x2F7CEB6520288061(0);
    AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", 0);
    AUDIO::SET_MOBILE_PHONE_RADIO_STATE(0);
    AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 0);
    MISC::CLEAR_BIT(&(Global_2359302.f_1), 3);
  }
}