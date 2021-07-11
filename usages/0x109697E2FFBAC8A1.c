// fm_bj_race_controler.c @ L264742
void func_3462(var uParam0, var uParam1)
{
  if ((((((((!func_246(Global_4194305.f_5) && !func_1857(uParam0->f_571)) && func_8026(PLAYER::PLAYER_ID(), 1, 1)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && AUDIO::DOES_PLAYER_VEH_HAVE_RADIO()) && AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255) && !func_187(PLAYER::PLAYER_ID())) && !func_4205()) && !func_262())
  {
    Global_2458964 = 1;
    AUDIO::SET_MOBILE_PHONE_RADIO_STATE(1);
    AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", 1);
  }
  func_3412(uParam1, &(uParam1->f_5057), &(uParam1->f_5074));
  if (func_1717())
  {
    func_1376(&(uParam1->f_5091), &(uParam1->f_5108));
  }
  AUDIO::STOP_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
  if (MISC::IS_BIT_SET(uParam1->f_5314, 25))
  {
    if (!func_262())
    {
      AUDIO::TRIGGER_MUSIC_EVENT("MP_DM_COUNTDOWN_30_SEC_FIRA");
    }
    else
    {
      AUDIO::TRIGGER_MUSIC_EVENT("AW_COUNTDOWN_30S_KILL");
    }
  }
}