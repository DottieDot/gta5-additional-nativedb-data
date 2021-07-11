// freemode.c @ L433313
int func_6456(int iParam0, int iParam1, bool bParam2, int iParam3)
{
  if (STREAMING::IS_MODEL_A_VEHICLE(iParam0))
  {
    if (bParam2 && PED::IS_PED_IN_MODEL(iParam1, iParam0))
    {
      return iParam3;
    }
  }
  else if (!bParam2)
  {
    return ENTITY::_GET_ENTITY_PICKUP(iParam1, iParam0);
  }
  return -1;
}