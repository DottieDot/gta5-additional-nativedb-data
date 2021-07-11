// michael3.ysc @ L117726
void func_755(var uParam0, struct<7> Param1, var uParam2)
{
  if (func_30(*uParam0))
  {
    if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0) == iLocal_292)
    {
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_295);
    }
    else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0) == iLocal_291)
    {
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_294);
    }
    PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
    PED::SET_PED_ACCURACY(*uParam0, 1);
    PED::SET_PED_ANGLED_DEFENSIVE_AREA(*uParam0, Param1, Param1.f_3, Param1.f_6, 0, 0);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, true);
    PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
    PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
    func_731(uParam0);
    TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*uParam0, vLocal_1676, 5f, 0);
  }
}