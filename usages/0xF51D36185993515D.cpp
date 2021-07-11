// country_race.ysc @ L19003
void func_312(int iParam0, vector3 vParam1)
{
  int iVar0;
  vector3 vVar1[8];
  float fVar2;
  vector3 vVar3;
  
  iVar0 = 0;
  while (iVar0 <= 7)
  {
    vVar1[iVar0 /*3*/] = { vParam1 + func_315(iVar0) };
    MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1[iVar0 /*3*/], &fVar2, 0, 0);
    if (fVar2 < (vParam1.z - 2f) || fVar2 > (vParam1.z + 2f))
    {
      vVar1[iVar0 /*3*/].f_2 = vParam1.z;
    }
    else
    {
      vVar1[iVar0 /*3*/].f_2 = fVar2;
    }
    iVar0++;
  }
  vVar3 = { func_313(&vVar1) };
  GRAPHICS::_0xF51D36185993515D(iParam0, vParam1 - Vector(0.3f, 0f, 0f), vVar3);
}