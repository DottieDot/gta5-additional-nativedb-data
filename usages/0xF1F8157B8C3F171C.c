// rural_bank_setup.c @ L20867
bool func_333()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_230))
  {
    STREAMING::REQUEST_MODEL(joaat("RUFFIAN"));
    STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("RUFFIAN")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")))
    {
      iLocal_231 = VEHICLE::CREATE_VEHICLE(joaat("RUFFIAN"), vLocal_108, fLocal_109, true, true, false);
      iLocal_230 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_231, 26, joaat("a_m_y_genstreet_02"), -1, 1, true);
      PED::SET_PED_COMPONENT_VARIATION(iLocal_230, 0, 1, 0, 0);
      PED::SET_PED_COMPONENT_VARIATION(iLocal_230, 3, 0, 0, 0);
      PED::SET_PED_COMPONENT_VARIATION(iLocal_230, 4, 0, 0, 0);
      VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_231, 1);
      VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_231, 3000f);
      AUDIO::_0xF1F8157B8C3F171C(iLocal_231, "Trevor_Revs_Off", "PALETO_SCORE_SETUP_SOUNDS");
      ENTITY::SET_ENTITY_HEALTH(iLocal_231, 3000, 0);
      VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_231, 3);
      PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_230, 17, true);
      PED::SET_PED_FLEE_ATTRIBUTES(iLocal_230, 128, true);
      PED::SET_PED_FLEE_ATTRIBUTES(iLocal_230, 1024, true);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
      PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_230, 3);
      AUDIO::SET_VEH_RADIO_STATION(iLocal_231, AUDIO::GET_RADIO_STATION_NAME(6));
      PED::SET_PED_HELMET(iLocal_230, 0);
    }
  }
  return (ENTITY::DOES_ENTITY_EXIST(iLocal_230) && ENTITY::DOES_ENTITY_EXIST(iLocal_231));
}