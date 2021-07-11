// hunting2.ysc @ L48257
int func_508(int iParam0)
{
  if (func_522(Local_93[iParam0 /*36*/]))
  {
    if (ENTITY::IS_ENTITY_ON_SCREEN(Local_93[iParam0 /*36*/]))
    {
      if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_93[iParam0 /*36*/]))
      {
        if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_93[iParam0 /*36*/].f_15, ENTITY::GET_ENTITY_COORDS(Local_93[iParam0 /*36*/], false), 1))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}