// pb_homeless.c @ L258
int func_3(int iParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4)
{
  float fVar0;
  vector3 vVar1;
  
  if (fParam3 < 1f)
  {
    fVar0 = (1f + 0.5f);
  }
  else
  {
    fVar0 = (fParam3 + 0.5f);
  }
  vVar1 = { (fParam3 + 0.2f), (fParam3 + 0.2f), fVar0 };
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vParam1), vVar1, false, true, 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2)) && func_5(bParam4)) && !PED::IS_PED_RAGDOLL(iParam0)) && !TASK::IS_PED_GETTING_UP(iParam0))
    {
      func_4(iParam0, 1);
      return 1;
    }
    else
    {
      func_4(iParam0, 0);
    }
  }
  return 0;
}