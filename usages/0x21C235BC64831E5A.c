// agency_heist1.c @ L114308
int func_633(vector3 vParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  float fVar2;
  
  fVar2 = 99999f;
  iVar0 = 0;
  while (iVar0 < (*iParam1 - 1))
  {
    if (MISC::GET_DISTANCE_BETWEEN_COORDS(MISC::_0x21C235BC64831E5A(vParam0, *(iParam1[iVar0 /*3*/]), *(iParam1[iVar0 + 1 /*3*/]), 1), vParam0, true) < fVar2)
    {
      iVar1 = iVar0;
      fVar2 = SYSTEM::VDIST(MISC::_0x21C235BC64831E5A(vParam0, *(iParam1[iVar0 /*3*/]), *(iParam1[iVar0 + 1 /*3*/]), 1), vParam0);
    }
    iVar0++;
  }
  return iVar1;
}