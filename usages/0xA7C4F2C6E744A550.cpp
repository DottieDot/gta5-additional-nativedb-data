// agency_heist3a.ysc @ L145504
int func_1116(int iParam0, vector3 vParam1, int iParam2, vector3 vParam3, float fParam4)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
    {
      if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, 10f, 10f, 10f, false, true, 0))
      {
        if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) >= iParam2)
        {
          return 1;
        }
        else
        {
          MISC::CLEAR_AREA(vParam3, 10f, 1, 0, 0, false);
          ENTITY::SET_ENTITY_COORDS(iParam0, vParam3, 1, false, 0, 1);
          ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
          VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
          func_755(vParam3, fParam4);
        }
      }
    }
  }
  return 0;
}