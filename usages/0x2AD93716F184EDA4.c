// am_mp_property_ext.c @ L75092
void func_318(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = 0;
  while (iVar0 < VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(uParam0->f_17))
  {
    iVar2 = (iVar0 - 1);
    if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_20, iVar2, 0))
    {
      iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_20, iVar2, 0);
      if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
      {
        if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) == func_3925())
        {
          if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
          {
            NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
          }
          else
          {
            TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1);
            ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
            ENTITY::SET_ENTITY_VISIBLE(iVar1, false, 0);
          }
        }
      }
    }
    iVar0++;
  }
}