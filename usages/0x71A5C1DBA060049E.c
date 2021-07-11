// maintransition.c @ L136690
void func_1291(var uParam0)
{
  struct<29> Var0;
  struct<2> Var1;
  float fVar2;
  float fVar3;
  
  func_1252(&Var0, 12);
  fVar2 = (100f - func_1293(uParam0, 0));
  func_1292(uParam0, 12, -1, fVar2, fVar2);
  func_1251(uParam0, &Var1, 12);
  fVar3 = func_1250(Var1.f_1, Var0.f_27, Var0.f_28);
  PED::_SET_PED_FACE_FEATURE(uParam0->f_42[0], Var0.f_24, fVar3);
}