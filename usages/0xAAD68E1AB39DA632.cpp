// golf.ysc @ L127719
void func_1227(var uParam0, var uParam1, var uParam2)
{
  float fVar0;
  vector3 vVar1;
  vector3 vVar2;
  vector3 vVar3;
  float fVar4;
  
  fVar0 = (func_1437(func_1196(uParam1), func_532(uParam0, func_524(uParam1))) + 90f);
  vVar1 = { func_1196(uParam1) };
  vVar2 = { func_556(SYSTEM::COS(fVar0), SYSTEM::SIN(fVar0), 0f) };
  vVar3 = { Vector(50f, 50f, 50f) * vVar2 };
  GRAPHICS::DRAW_DEBUG_SPHERE(vVar1, 0.25f, 255, 0, 0, 255);
  GRAPHICS::DRAW_DEBUG_SPHERE(vVar1 + vVar3, 0.25f, 255, 255, 255, 255);
  GRAPHICS::DRAW_DEBUG_LINE(vVar1, vVar1 + vVar3, 0, 255, 0, 255);
  if (STREAMING::_0x07C313F94746702C(uParam2->f_721))
  {
    STREAMING::_0x1EE7D8DF4425F053(uParam2->f_721);
  }
  if (!STREAMING::_0x07C313F94746702C(uParam2->f_721))
  {
    if (func_1228(uParam2))
    {
      PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uParam2->f_578);
    }
    fVar4 = 75f;
    uParam2->f_578 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(vVar1 + vVar3, 2f, 100f, 10f, func_573((fVar0 - 90f)), 0, 7);
    uParam2->f_721 = STREAMING::_0x1F3F018BC3AFA77C(vVar1, vVar2, fVar4, 13, 127);
  }
}