// re_duel.ysc @ L4686
int func_77()
{
  vector3 vVar0;
  var uVar1;
  var uVar2;
  
  if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &vVar0, 1, 1077936128, 0))
  {
    if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar0, &uVar2, &uVar1))
    {
      return uVar1 & 1 == 1;
    }
  }
  return 0;
}