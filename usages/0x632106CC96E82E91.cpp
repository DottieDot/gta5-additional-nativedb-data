// am_darts.ysc @ L109744
void func_605(var uParam0)
{
  vector3 vVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.08f;
  uParam0->f_8.f_1 = -0.213f;
  vVar0 = { vLocal_326 - uParam0->f_8 };
  fVar1 = SYSTEM::VMAG(vVar0);
  uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
  fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
  uParam0->f_17.f_2 = (fVar2 - 180f);
  fVar3 = (MISC::TAN(uParam0->f_17.f_2) * fVar4);
  uParam0->f_11 = { uParam0->f_8 };
  uParam0->f_11 = (uParam0->f_11 + fVar3);
  vVar0 = { vLocal_326 - uParam0->f_11 };
  fVar1 = SYSTEM::VMAG(vVar0);
  uParam0->f_5 = { vVar0 / Vector(fVar1, fVar1, fVar1) };
}