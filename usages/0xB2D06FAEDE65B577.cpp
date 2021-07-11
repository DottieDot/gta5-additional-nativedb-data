// assassin_bus.ysc @ L17939
void func_364()
{
  int iVar0;
  
  if (iLocal_980 > 4)
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
        {
          if ((iVar0 != iLocal_1463 && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("BUS")) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("COACH"))
          {
            iLocal_1463 = iVar0;
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1463, true, 1);
            VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_1463, 0);
          }
        }
      }
    }
  }
}