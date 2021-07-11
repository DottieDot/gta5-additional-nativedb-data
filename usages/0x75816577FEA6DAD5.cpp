// fm_capture_creator.ysc @ L160954
void func_1163(var uParam0)
{
  if (STREAMING::IS_MODEL_VALID(joaat("mp_m_freemode_01")) && STREAMING::IS_MODEL_A_PED(joaat("mp_m_freemode_01")))
  {
    STREAMING::REQUEST_MODEL(joaat("mp_m_freemode_01"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("mp_m_freemode_01")))
    {
      uParam0->f_767 = PED::CREATE_PED(26, joaat("mp_m_freemode_01"), uParam0->f_3, 0f, 0, true);
      if (func_1162(uParam0->f_767))
      {
        ENTITY::SET_ENTITY_VISIBLE(uParam0->f_767, false, 0);
        ENTITY::SET_ENTITY_COLLISION(uParam0->f_767, false, 0);
        ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_767, true);
        ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_767, 0);
      }
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("mp_m_freemode_01"));
    }
  }
}