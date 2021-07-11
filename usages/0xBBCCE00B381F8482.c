// agency_heist1.c @ L689
void func_5()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
  {
    if (PED::IS_PED_INJURED(iLocal_171) && iLocal_48 < 6)
    {
      func_11("S1_FAILED_K");
    }
    else
    {
      if (((FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_171, false) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_171, false) - Vector(3f, 3f, 3f)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_171, false), 6f, 1)) || (PED::IS_PED_FLEEING(iLocal_171) && !bLocal_51)) || (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_171)))
      {
        func_11("S1_JSPOOK");
      }
      if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) && iLocal_175 == PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))
      {
        func_11("S1_JSPOOK");
      }
    }
    if (!bLocal_91)
    {
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
      {
        if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_175, 0))
        {
          func_11("S1_FAILED_C");
        }
      }
    }
  }
}