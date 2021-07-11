// family2.c @ L32809
void func_210()
{
  if ((!func_177() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && (MISC::GET_GAME_TIMER() - iLocal_167) > 5000)
  {
    if ((((((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, 0) && !PED::IS_PED_INJURED(iLocal_88)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, 0)) && ENTITY::IS_ENTITY_IN_WATER(iLocal_92)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) != iLocal_92) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_88, true)) < 35f) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) && Local_545.f_1)
    {
      if ((MISC::GET_GAME_TIMER() - iLocal_186) > 6000)
      {
        if (func_158(&Local_549, cLocal_202, "FAM2_GETOFF", 8, 0, 0, 0))
        {
          iLocal_186 = MISC::GET_GAME_TIMER();
        }
      }
    }
  }
}