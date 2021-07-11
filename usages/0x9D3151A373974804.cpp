// agency_heist3b.ysc @ L114119
void func_670(var uParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
  if (!PED::IS_PED_INJURED(*uParam0))
  {
    PED::SET_PED_COMBAT_MOVEMENT(*uParam0, iParam3);
    PED::SET_PED_COMBAT_RANGE(*uParam0, iParam4);
    PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, iParam5);
    PED::SET_COMBAT_FLOAT(*uParam0, 5, fParam7);
    PED::SET_COMBAT_FLOAT(*uParam0, 8, fParam8);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 51, bParam9);
    if (bParam10)
    {
      PED::SET_PED_CONFIG_FLAG(*uParam0, 188, bParam10);
    }
    PED::SET_PED_DIES_WHEN_INJURED(*uParam0, bParam10);
    PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, bParam11);
    PED::SET_PED_CONFIG_FLAG(*uParam0, 286, bParam12);
    if (!func_41(vParam1) && fParam2 != 0f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, vParam1, fParam2, 1, 0);
    }
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam6);
  }
}