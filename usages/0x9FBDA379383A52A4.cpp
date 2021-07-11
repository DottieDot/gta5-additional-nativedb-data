// am_armwrestling.ysc @ L125053
void func_972(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
  if (iParam1 >= 14)
  {
    return;
  }
  uParam0->f_25 = iParam1;
  if (CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_25]))
  {
    if (!bParam3)
    {
      CAM::SET_CAM_ACTIVE((*uParam0)[uParam0->f_25], bParam2);
    }
    else
    {
      CAM::SET_CAM_ACTIVE_WITH_INTERP((*uParam0)[uParam0->f_25], (*uParam0)[iParam4], iParam5, 1, 1);
    }
  }
}