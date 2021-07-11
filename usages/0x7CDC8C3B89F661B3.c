// am_casino_peds.c @ L341833
void func_4438(int iParam0, var uParam1)
{
  switch (iParam0)
  {
    case 0:
      AUDIO::_SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_M_BOUNCER_01_BLACK_FULL_01"));
      break;
    
    case 1:
      AUDIO::_SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_M_GENERICSECURITY_01_WHITE_MINI_01"));
      break;
    
    case 2:
      AUDIO::_SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_M_BOUNCER_01_LATINO_FULL_01"));
      break;
    
    case 3:
      AUDIO::_SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_M_GENERICSECURITY_01_WHITE_MINI_01"));
      break;
    
    case 4:
      AUDIO::_SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_M_GENERICSECURITY_01_WHITE_MINI_01"));
      break;
    
    case 5:
      AUDIO::_SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_M_BOUNCER_01_LATINO_FULL_01"));
      break;
    
    case 6:
      AUDIO::_SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("CAS_SECURITY_MANAGER"));
      break;
  }
}