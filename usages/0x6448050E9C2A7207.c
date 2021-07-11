// act_cinema.c @ L105803
int func_732(vector3 vParam0, var uParam1, var uParam2)
{
  vector3 vVar0;
  int iVar1;
  var uVar2;
  var uVar3;
  
  iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
  if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
  {
    PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
    *uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
    *uParam2 = MISC::ABSF((vParam0.z - vVar0.z));
    return 1;
  }
  return 0;
}