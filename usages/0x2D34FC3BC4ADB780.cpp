// hunting1.ysc @ L42334
void func_390()
{
  if (!PED::IS_PED_INJURED(iLocal_348) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (!bLocal_283)
    {
      if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), vLocal_384, 0, 1, 0) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
      {
        if (!PED::IS_PED_FALLING(iLocal_348))
        {
          bLocal_283 = true;
        }
      }
    }
    else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_348, PLAYER::PLAYER_PED_ID(), vLocal_385, 0, 1, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
    {
      if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
      {
        bLocal_283 = false;
      }
    }
  }
}