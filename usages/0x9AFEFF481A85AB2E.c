// armenian3.c @ L27141
void func_117(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (iParam3 == 1)
      {
        PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, vParam1);
      }
      else
      {
        ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
      }
      PED::CLEAR_PED_WETNESS(iParam0);
      ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
    }
  }
}