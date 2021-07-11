// friendactivity.c @ L1539
void func_53(var uParam0)
{
  if (*uParam0 != 0)
  {
    if (!PED::IS_PED_INJURED(uParam0->f_7))
    {
      PED::SET_PED_SUFFERS_CRITICAL_HITS(uParam0->f_7, 1);
      PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_7, 0);
      PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 32, true);
      PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 107, false);
      if (PED::DOES_GROUP_EXIST(func_13()) && PED::IS_PED_GROUP_MEMBER(uParam0->f_7, func_13()))
      {
        PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(uParam0->f_7, func_13(), 0);
      }
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_7, false);
      if (uParam0->f_1 != 0)
      {
        if (func_55(4, uParam0->f_7))
        {
          func_54(4, uParam0->f_7, 0);
        }
      }
      if (uParam0->f_7 != PLAYER::PLAYER_PED_ID())
      {
        if (PED::IS_PED_IN_GROUP(uParam0->f_7))
        {
          PED::REMOVE_PED_FROM_GROUP(uParam0->f_7);
        }
      }
    }
  }
}