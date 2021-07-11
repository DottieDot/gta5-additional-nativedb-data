// agency_heist1.ysc @ L107042
bool func_516(vector3 vParam0, float fParam1, bool bParam2, bool bParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
  {
    func_439(&iLocal_176, 0, vParam0, fParam1, 1, 0);
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_176, 0))
  {
    if (bParam3)
    {
      if (!PED::IS_PED_INJURED(iLocal_170))
      {
        if (!PED::IS_PED_IN_VEHICLE(iLocal_170, iLocal_176, 0))
        {
          PED::SET_PED_INTO_VEHICLE(iLocal_170, iLocal_176, 0);
        }
      }
    }
    if (bParam2)
    {
      if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, 0))
      {
        PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_176, -1);
      }
    }
    ENTITY::SET_ENTITY_COORDS(iLocal_176, vParam0, 1, false, 0, 1);
    ENTITY::SET_ENTITY_HEADING(iLocal_176, fParam1);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_176, 1084227584);
    ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_176, 2, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
  }
  return ENTITY::DOES_ENTITY_EXIST(iLocal_176);
}