// hunting2.ysc @ L38032
void func_313(var uParam0, int iParam1, int iParam2)
{
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
    PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, false);
    ENTITY::SET_ENTITY_HEALTH(*uParam0, 100, 0);
    PED::SET_PED_BLOCKS_PATHING_WHEN_DEAD(*uParam0, 1);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_92);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_92, 1862763509);
    PED::SET_PED_SEEING_RANGE(*uParam0, 20f);
    PED::SET_PED_HEARING_RANGE(*uParam0, 10f);
    ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, true, 1);
    PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
    PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
    uParam0->f_31 = 0;
    uParam0->f_8 = 1;
    uParam0->f_12 = 0;
    uParam0->f_11 = iParam2;
    uParam0->f_9 = 0;
    if (bLocal_540 && !uParam0->f_29)
    {
      Local_95[uParam0->f_25 /*5*/].f_3 = 1;
      Local_95[uParam0->f_25 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
    }
    iLocal_567 = 0;
    iLocal_554++;
    uParam0->f_16 = iParam1;
  }
}