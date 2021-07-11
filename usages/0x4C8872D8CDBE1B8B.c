// assassin_bus.c @ L24496
void func_484(int iParam0, vector3 vParam1, vector3 vParam2)
{
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, 0);
  PED::CLEAR_PED_NON_CREATION_AREA();
  PATHFIND::DISABLE_NAVMESH_IN_AREA(vParam1, vParam2, 0);
}