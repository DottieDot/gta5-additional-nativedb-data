// michael3.c @ L116848
int func_726(int iParam0, var uParam1)
{
  int iVar0;
  
  if (!func_30(iParam0))
  {
    return 0;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    return 0;
  }
  if (ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
  {
    iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam1);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if (ENTITY::IS_ENTITY_A_PED(iVar0))
      {
        if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == iParam0)
        {
          if (PED::GET_PED_TIME_OF_DEATH(*uParam1) == MISC::GET_GAME_TIMER())
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}