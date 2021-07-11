// am_casino_peds.ysc @ L283125
void func_3331(var uParam0)
{
  if (MISC::IS_BIT_SET(uParam0->f_22, 1))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_224) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22.f_224, 1))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_224))
      {
        VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam0->f_22.f_224, 0);
        if (uParam0->f_22.f_223 != 0 && uParam0->f_22.f_223 != VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(uParam0->f_22.f_224))
        {
          VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_22.f_224, uParam0->f_22.f_223);
        }
        func_3275(uParam0, 1);
      }
      else
      {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_224);
      }
    }
    else
    {
      func_3275(uParam0, 1);
    }
    func_996(PLAYER::PLAYER_ID(), 1, 0, 0);
    PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
  }
}