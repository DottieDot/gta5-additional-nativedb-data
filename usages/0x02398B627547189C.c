// agency_prep2amb.c @ L811
void func_18()
{
  if (MISC::IS_BIT_SET(iLocal_49, 2) && MISC::IS_BIT_SET(iLocal_49, 0))
  {
    if (func_85(iLocal_51))
    {
      if (func_19(PLAYER::PLAYER_PED_ID(), iLocal_51, 10f, 1))
      {
        if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), vLocal_52) >= 100f)
        {
          func_68(0);
        }
      }
    }
    else if (!func_73(25, 0))
    {
      if (func_85(iLocal_51))
      {
        VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_51, 0);
      }
      func_20(&iLocal_51);
      func_68(1);
    }
  }
}