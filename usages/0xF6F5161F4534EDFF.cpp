// business_battles.ysc @ L250155
int func_3806(int iParam0, int iParam1, int iParam2)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam1) && PED::IS_PED_A_PLAYER(iParam1))
  {
    return 0;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iParam2) && PED::IS_PED_A_PLAYER(iParam2))
  {
    return 0;
  }
  if (func_3807(ENTITY::GET_ENTITY_MODEL(iParam0)) && ENTITY::GET_ENTITY_POPULATION_TYPE(iParam0) != 7)
  {
    return 1;
  }
  if (func_1201(iParam1))
  {
    return 1;
  }
  if (func_1201(iParam2))
  {
    return 1;
  }
  return 0;
}