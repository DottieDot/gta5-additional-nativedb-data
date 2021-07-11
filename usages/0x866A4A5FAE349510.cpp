// family4.ysc @ L122880
float func_813(int iParam0, int iParam1)
{
  struct<2> Var0;
  vector3 vVar1;
  vector3 vVar2;
  vector3 vVar3;
  float fVar4;
  int iVar5;
  
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    Var0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
    Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
  }
  if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
  {
    vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
    if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
    {
      iVar5 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
      vVar3.x = ENTITY::GET_ENTITY_FORWARD_X(iVar5);
      vVar3.y = ENTITY::GET_ENTITY_FORWARD_Y(iVar5);
    }
    else
    {
      vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
      vVar3 = { vVar2 - vVar1 };
    }
  }
  fVar4 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0, Var0.f_1, vVar3.x, vVar3.y);
  return fVar4;
}