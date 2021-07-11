// am_vehicle_spawn.ysc @ L14948
void func_414()
{
  int iVar0;
  
  if (func_8(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (func_415(PLAYER::PLAYER_ID(), -1))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
      {
        if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("trash2")))
        {
          Local_766.f_3 = 51;
          Local_766.f_2 = 0;
          if (func_318(&Local_766, 0, 500))
          {
            if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 5) == 0f)
            {
              VEHICLE::SET_VEHICLE_DOOR_OPEN(iVar0, 5, 0, 0);
            }
            else
            {
              VEHICLE::SET_VEHICLE_DOOR_SHUT(iVar0, 5, 0);
            }
          }
        }
      }
    }
  }
}