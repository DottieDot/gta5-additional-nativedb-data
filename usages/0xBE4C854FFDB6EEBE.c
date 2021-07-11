// fm_bj_race_controler.c @ L76319
void func_602(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
  int iVar0;
  
  if (Global_2405071.f_2881)
  {
    iVar0 = (iParam2 - 1);
    if (iVar0 < 0)
    {
      iVar0 = (iParam4 - 1);
    }
    if ((func_604(iParam2, bParam3) || func_603(iParam2, bParam3)) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam1) >= 0.9f)
    {
      VEHICLE::_TRANSFORM_VEHICLE_TO_SUBMARINE(iParam1, 1);
    }
  }
  *uParam0 = 1;
}