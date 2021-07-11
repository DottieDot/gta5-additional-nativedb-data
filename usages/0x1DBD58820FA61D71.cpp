// agency_prep2amb.ysc @ L9161
int func_181(int iParam0)
{
  vector3 vVar0;
  
  if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
  {
    func_69(39);
    return 0;
  }
  if (!VEHICLE::_0x639431E895B9AA57(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0, false) && !VEHICLE::_0x639431E895B9AA57(PLAYER::PLAYER_PED_ID(), iParam0, 0, 0, false))
  {
    func_69(37);
    return 0;
  }
  if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
  {
    func_69(36);
    return 0;
  }
  vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
  if (vVar0.x >= 10f || vVar0.x <= -10f)
  {
    func_69(42);
    return 0;
  }
  else if (vVar0.y >= 15f || vVar0.y <= -15f)
  {
    func_69(43);
    return 0;
  }
  return 1;
}