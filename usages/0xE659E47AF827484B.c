// am_hunt_the_beast.c @ L119221
int func_819()
{
  if (ENTITY::IS_ENTITY_ON_SCREEN(vLocal_867[func_40() /*3*/].f_2))
  {
    if (func_822(vLocal_867[func_40() /*3*/].f_2))
    {
      if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(vLocal_867[func_40() /*3*/].f_2, true), 1f))
      {
        if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), vLocal_867[func_40() /*3*/].f_2, 126))
        {
          if (func_820(vLocal_867[func_40() /*3*/].f_2, PLAYER::PLAYER_PED_ID(), func_821(), 1))
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}