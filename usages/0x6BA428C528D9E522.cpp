// director_mode.ysc @ L4796
void func_32(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !PED::IS_PED_INJURED(iParam0))
    {
      PED::SET_PED_DIES_IN_WATER(iParam0, 1);
      PED::SET_PED_MAX_TIME_UNDERWATER(iParam0, -1f);
      PED::SET_PED_DIES_IN_SINKING_VEHICLE(iParam0, 1);
    }
  }
}