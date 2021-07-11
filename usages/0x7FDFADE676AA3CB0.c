// barry2.c @ L49376
void func_544(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
  int iVar0;
  float fVar1;
  vector3 vVar2;
  vector3 vVar3;
  float fVar4;
  
  fVar1 = (360f / SYSTEM::TO_FLOAT(iParam6));
  vVar2 = { vParam0 };
  vVar3 = { vParam0 };
  fVar4 = 0f;
  vVar2 = { vParam0 };
  vVar2.x = (vVar2.x + (SYSTEM::SIN((fVar4 - fVar1)) * fParam1));
  vVar2.y = (vVar2.y + (SYSTEM::COS((fVar4 - fVar1)) * fParam1));
  iVar0 = 0;
  while (iVar0 <= iParam6)
  {
    vVar3 = { vParam0 };
    vVar3.x = (vVar3.x + (SYSTEM::SIN(fVar4) * fParam1));
    vVar3.y = (vVar3.y + (SYSTEM::COS(fVar4) * fParam1));
    GRAPHICS::DRAW_DEBUG_LINE(vVar2, vVar3, iParam2, iParam3, iParam4, iParam5);
    vVar2 = { vVar3 };
    fVar4 = (fVar4 + fVar1);
    iVar0++;
  }
}