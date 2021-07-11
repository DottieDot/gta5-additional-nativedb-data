// act_cinema.c @ L100273
int func_677(int iParam0)
{
  vector3 vVar0;
  var uVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
    if (WATER::TEST_PROBE_AGAINST_WATER(vVar0, vVar0.x, vVar0.y, -1f, &uVar1))
    {
      return 1;
    }
  }
  return 0;
}