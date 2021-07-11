// act_cinema.ysc @ L3732
void func_84(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
  int iVar0;
  
  if (STREAMING::IS_MODEL_VALID(iParam0))
  {
    MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
  }
  else
  {
    iVar0 = func_87(iParam0);
    if (iVar0 != 0)
    {
      func_85(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
      return;
    }
  }
  if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
  {
    *uParam1 = (0f - (fParam4 * 0.5f));
    *uParam2 = (0f + (fParam4 * 0.5f));
    uParam1->f_1 = (0f - (fParam3 * 0.5f));
    uParam2->f_1 = (0f + (fParam3 * 0.5f));
    uParam1->f_2 = (0f - (fParam5 * 0.5f));
    uParam2->f_2 = (0f + (fParam5 * 0.5f));
  }
}