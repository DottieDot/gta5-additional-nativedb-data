// agency_heist1.c @ L106935
int func_512(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
  int iVar0;
  
  if (!func_26(iParam1))
  {
    iVar0 = func_514(iParam1);
    STREAMING::REQUEST_MODEL(iVar0);
    if (STREAMING::HAS_MODEL_LOADED(iVar0))
    {
      if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
      {
        PED::DELETE_PED(iParam0);
      }
      if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
      {
        *iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 0, false);
        PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
        func_513(*iParam0, iParam1);
        if (bParam4)
        {
          STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
        }
      }
      return 1;
    }
  }
  return 0;
}