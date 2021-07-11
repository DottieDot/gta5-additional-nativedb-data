// am_mp_hangar.c @ L28744
int func_411()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_457.f_1370))
  {
    if (func_12(joaat("s_m_m_fiboffice_02")))
    {
      Local_457.f_1370 = PED::CREATE_PED(4, joaat("s_m_m_fiboffice_02"), -1266.801f, -2970.337f, -49.4897f, 180f, 0, false);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_fiboffice_02"));
      ENTITY::SET_ENTITY_INVINCIBLE(Local_457.f_1370, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_457.f_1370, true);
      PED::SET_PED_COMPONENT_VARIATION(Local_457.f_1370, 0, 1, 1, 0);
      PED::SET_PED_COMPONENT_VARIATION(Local_457.f_1370, 3, 0, 1, 0);
      PED::SET_PED_COMPONENT_VARIATION(Local_457.f_1370, 4, 0, 1, 0);
      PED::APPLY_PED_BLOOD_SPECIFIC(Local_457.f_1370, 1, 0.55f, 0.72f, 307.546f, 1f, 3, 0f, "BulletLarge");
    }
  }
  if (!ENTITY::DOES_ENTITY_EXIST(Local_457.f_1370))
  {
    return 0;
  }
  if (!PED::IS_PED_INJURED(Local_457.f_1370))
  {
    if (!PED::_HAS_STREAMED_PED_ASSETS_LOADED(Local_457.f_1370))
    {
      return 0;
    }
  }
  return 1;
}