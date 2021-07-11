// taxi_clowncar.c @ L8281
bool func_283(int iParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  vector3 vVar2;
  vector3 vVar3;
  vector3 vVar4;
  vector3 vVar5;
  vector3 vVar6;
  vector3 vVar7;
  vector3 vVar8;
  float fVar9;
  
  PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &vVar0, 1, 3f, 0f);
  PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &vVar1, 1, 3f, 0f);
  PATHFIND::_GET_POINT_ON_ROAD_SIDE(vVar0, -1, &vVar2);
  fVar9 = SYSTEM::VMAG(vVar2 - vVar0);
  vVar3 = { func_287((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
  vVar4 = { func_286(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
  vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
  vVar5 = { vVar0 - vVar3 + vVar4 };
  vVar6 = { vVar0 - vVar3 - vVar4 };
  vVar7 = { vVar1 + vVar3 + vVar4 };
  vVar8 = { vVar1 + vVar3 - vVar4 };
  vVar8 = { vVar8 };
  return func_284(ENTITY::GET_ENTITY_COORDS(iParam0, true), vVar5, vVar6, vVar7);
}