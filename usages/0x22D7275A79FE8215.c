// act_cinema.c @ L107157
int func_790(vector3 vParam0)
{
  int iVar0;
  
  iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(vParam0, 1, 1, 1077936128, 0);
  if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar0))
  {
    if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
    {
      return 1;
    }
  }
  return 0;
}