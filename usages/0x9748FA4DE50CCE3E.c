// am_mp_armory_aircraft.c @ L282862
void func_4165()
{
  Global_1686918 = 0;
  func_4168(0, func_38(Local_578.f_7));
  func_4168(1, func_37(Local_578.f_7));
  func_4168(2, func_36(Local_578.f_7));
  func_4166(Local_578.f_3, &(Local_578.f_8), 0, 0);
  func_68();
  func_2365(0);
  AUDIO::START_AUDIO_SCENE("dlc_xm_avenger_interior_scene");
  AUDIO::SET_AMBIENT_ZONE_LIST_STATE("azl_dlc_xm_int_01_avngr_zones", 1, 0);
  if (func_9(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
    {
      PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
    }
    if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 0))
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
    }
  }
  GRAPHICS::_0xE3E2C1B4C59DBC77(1);
}