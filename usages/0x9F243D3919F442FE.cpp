// fbi5a.ysc @ L141591
void func_1039(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
  *iParam0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
    {
      if (!VEHICLE::IS_BIG_VEHICLE(*iParam0))
      {
        if (!ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("TAXI"))
        {
          if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, vParam1, vParam2, false, true, 0))
          {
            if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
            {
              ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
            }
            if (!func_630(*iParam0, func_1095(), 0))
            {
              MISC::CLEAR_AREA(vParam3, 10f, 1, 0, 0, false);
              ENTITY::SET_ENTITY_COORDS(*iParam0, vParam3, 1, false, 0, 1);
              ENTITY::SET_ENTITY_HEADING(*iParam0, fParam4);
              VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
            }
          }
        }
      }
    }
  }
}