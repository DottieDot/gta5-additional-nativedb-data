// abigail2.ysc @ L36457
int func_293(int iParam0, bool bParam1, float fParam2, float fParam3)
{
  if (bParam1)
  {
    if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
    {
      if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
      {
        return 1;
      }
    }
  }
  if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2, 1))
  {
    return 1;
  }
  return 0;
}