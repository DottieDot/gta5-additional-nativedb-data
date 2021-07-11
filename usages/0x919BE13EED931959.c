// armenian1.c @ L56710
void func_534(int iParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
  if (STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam0))
  {
    iLocal_440[iParam4] = VEHICLE::CREATE_VEHICLE(iParam0, vParam2, fParam3, true, true, false);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_440[iParam4], 1084227584);
    if (bParam6)
    {
      iLocal_450[iParam4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_440[iParam4], 26, iParam1, -1, 1, true);
      TASK::TASK_STAND_STILL(iLocal_450[iParam4], -1);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_450[iParam4], true);
    }
    if (fParam5 > 0f)
    {
    }
  }
}