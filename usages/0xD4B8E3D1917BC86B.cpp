// fm_bj_race_controler.ysc @ L489453
void func_8029(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7)
{
  if (func_185())
  {
    PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(fParam0);
    VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam3);
  }
  PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(fParam1, fParam2);
  VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam4);
  VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam5);
  if (fParam6 == 0f)
  {
  }
  VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(bParam7);
}