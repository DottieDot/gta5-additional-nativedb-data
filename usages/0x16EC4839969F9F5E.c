// assassin_multi.c @ L11139
int func_242(int iParam0, float fParam1)
{
  vector3 vVar0;
  
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
      if (PED::IS_COP_PED_IN_AREA_3D((vVar0.x - fParam1), (vVar0.y - fParam1), (vVar0.z - fParam1), (vVar0.x + fParam1), (vVar0.y + fParam1), (vVar0.z + fParam1)))
      {
        return 1;
      }
    }
  }
  return 0;
}