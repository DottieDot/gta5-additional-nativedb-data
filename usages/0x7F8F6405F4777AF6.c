// agency_heist1.c @ L116493
float func_682(vector3 vParam0)
{
  int iVar0;
  float fVar1;
  
  iVar0 = func_633(vParam0, &vLocal_214);
  if (iVar0 >= 0 && iVar0 < vLocal_214.x)
  {
    fVar1 = SYSTEM::TO_FLOAT(iVar0);
    if (iVar0 < (vLocal_214.x - 1))
    {
      fVar1 = (fVar1 + MISC::_0x7F8F6405F4777AF6(vParam0, vLocal_214[iVar0 /*3*/], vLocal_214[iVar0 + 1 /*3*/], 1));
    }
    return fVar1;
  }
  return -1f;
}