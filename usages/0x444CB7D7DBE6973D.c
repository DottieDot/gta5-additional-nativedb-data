// fm_bj_race_controler.c @ L309957
void func_4201(int iParam0)
{
  switch (iParam0)
  {
    case 0:
      PLAYER::SET_MAX_WANTED_LEVEL(6);
      PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
      PED::SET_CREATE_RANDOM_COPS(true);
      break;
    
    case 1:
      PLAYER::SET_MAX_WANTED_LEVEL(0);
      PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
      PED::SET_CREATE_RANDOM_COPS_ON_SCENARIOS(0);
      PED::SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(0);
      STREAMING::SET_DITCH_POLICE_MODELS(1);
      break;
    
    case 2:
      PLAYER::SET_MAX_WANTED_LEVEL(6);
      PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
      break;
    
    default:
      break;
  }
  if (func_2441() && MISC::IS_BIT_SET(Global_4456448.f_14, 21))
  {
    PED::SET_CREATE_RANDOM_COPS(false);
    PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_m_security_01"), true);
  }
}