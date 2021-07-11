// act_cinema.ysc @ L95907
void func_585(vector3 vParam0, float fParam1, int iParam2, bool bParam3)
{
  struct<2> Var0;
  struct<2> Var1;
  float fVar2;
  vector3 vVar3;
  vector3 vVar4;
  
  if (!iParam2 == 0)
  {
    func_84(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
    fVar2 = (Var1.f_1 - Var0.f_1);
    if (bParam3)
    {
      fVar2 = (fVar2 * -1f);
    }
    fVar2 = (fVar2 * 0.5f);
    vVar3 = { 0f, fVar2, 0f };
    vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam1, vVar3) };
    func_598(vVar4, fParam1);
  }
  else
  {
    func_598(vParam0, fParam1);
  }
}