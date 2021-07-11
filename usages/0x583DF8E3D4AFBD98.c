// fm_intro.c @ L8602
float func_214(int iParam0)
{
  float fVar0;
  float fVar1;
  
  if (iParam0->f_6 >= 31 && iParam0->f_6 < 33)
  {
    if (func_263(iParam0))
    {
      fVar0 = SYSTEM::TO_FLOAT((iParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
      if (CUTSCENE::_0x583DF8E3D4AFBD98() > 2)
      {
        fVar1 = ((fVar0 - 134735f) / SYSTEM::TO_FLOAT(52633));
        fVar0 = (83986f + (fVar1 * 50715f));
      }
    }
    else
    {
      fVar0 = SYSTEM::TO_FLOAT((iParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
    }
    return fVar0;
  }
  return iParam0->f_289;
}