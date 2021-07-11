// agency_heist3b.c @ L118845
void func_734(var uParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
  func_679(uParam0, vParam1, fParam2, iParam4, iParam5, iParam6);
  if (bLocal_412)
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vParam1, iParam3, bParam7, fParam8, bParam9, iParam10, uParam0->f_1, 0);
  }
  else
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(*uParam0, vParam1, iParam3, bParam7, fParam8, bParam9, iParam10, uParam0->f_1, 0);
  }
}