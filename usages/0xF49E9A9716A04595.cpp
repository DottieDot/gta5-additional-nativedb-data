// am_cp_collection.ysc @ L14052
void func_352(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar0 = 239;
  iVar1 = 250;
  iVar2 = 187;
  fVar3 = 5f;
  fVar5 = 64f;
  if (func_34())
  {
    fVar4 = 40f;
  }
  else
  {
    fVar4 = 15f;
  }
  if (!func_131(*uParam0))
  {
    *uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
    GRAPHICS::_DRAW_LIGHT_WITH_RANGE_AND_SHADOW(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
  }
}