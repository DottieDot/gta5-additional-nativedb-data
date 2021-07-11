// abigail1.c @ L38241
int func_279(vector3 vParam0, int iParam1, int iParam2)
{
  int iVar0;
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = 1000000f;
  iVar3 = 10;
  iVar0 = 0;
  while (iVar0 <= (10 - 1))
  {
    if (Global_93737[iVar0 /*10*/].f_7 != 263)
    {
      if (Global_93737[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
      {
        if (func_280(iVar0) || iParam2 == 0)
        {
          fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_93737[iVar0 /*10*/].f_3, true);
          if (fVar1 < fVar2)
          {
            fVar2 = fVar1;
            iVar3 = iVar0;
          }
        }
      }
    }
    iVar0++;
  }
  return iVar3;
}