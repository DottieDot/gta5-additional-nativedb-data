// fbi3.c @ L43679
void func_344(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
      PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
      PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
      if (iParam0 != PLAYER::PLAYER_PED_ID())
      {
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_2601);
      }
      PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
      PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
      PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, false);
      PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, false);
      PED::SET_PED_ALERTNESS(iParam0, 0);
      PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
      PED::SET_PED_COMBAT_RANGE(iParam0, 0);
      PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, 0);
      PED::SET_PED_SEEING_RANGE(iParam0, 0f);
      PED::SET_PED_HEARING_RANGE(iParam0, 0f);
    }
  }
}