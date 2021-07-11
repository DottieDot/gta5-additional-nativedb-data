// agency_heist2.c @ L2645
void func_56(var uParam0, int iParam1)
{
  if (uParam0->f_11)
  {
    *uParam0 = PED::CREATE_PED(26, iParam1, uParam0->f_3, uParam0->f_6, 1, true);
    func_57(*uParam0);
    if (iParam1 == joaat("s_m_y_construct_01"))
    {
      PED::SET_PED_PROP_INDEX(*uParam0, 0, 1, 2, false);
    }
    else
    {
      PED::SET_PED_PROP_INDEX(*uParam0, 0, 0, 1, false);
    }
    PED::SET_PED_KEEP_TASK(*uParam0, true);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_91);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
    PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
    PED::SET_PED_COMBAT_RANGE(*uParam0, 2);
    ENTITY::SET_ENTITY_HEALTH(*uParam0, MISC::GET_RANDOM_INT_IN_RANGE(125, 150), 0);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
  }
}