// armenian3.c @ L122349
void func_800(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
    PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
    PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
    PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
    PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
  }
}