// ambient_diving.c @ L1610
int func_36(var uParam0, var uParam1, vector3 vParam2)
{
  int iVar0;
  
  iVar0 = uParam0->f_10;
  if ((uParam1[iVar0 /*11*/])->f_10)
  {
    if ((uParam1[iVar0 /*11*/])->f_1 != 0)
    {
      if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[iVar0 /*11*/])->f_1) || func_49((uParam1[iVar0 /*11*/])->f_1))
      {
        func_39(uParam0, uParam1, iVar0);
        return 1;
      }
    }
  }
  if (OBJECT::DOES_PICKUP_EXIST((uParam1[iVar0 /*11*/])->f_1))
  {
    if ((SYSTEM::VDIST2(vParam2, OBJECT::GET_PICKUP_COORDS((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(13)) || func_38(14))
    {
      func_37(&((uParam1[iVar0 /*11*/])->f_1));
      (uParam1[iVar0 /*11*/])->f_1 = 0;
      (uParam1[iVar0 /*11*/])->f_10 = 0;
    }
  }
  return 0;
}