// act_cinema.ysc @ L122397
int func_1176()
{
  if (!MISC::IS_BIT_SET(iLocal_272, 0))
  {
    if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && iLocal_273 != 3)
    {
      return 1;
    }
    if (Global_76577)
    {
      if (func_26(PLAYER::PLAYER_ID(), 1, 0))
      {
        return 1;
      }
    }
    if (iLocal_273 == 3)
    {
      if (func_1157(PLAYER::PLAYER_ID()))
      {
        if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_217.f_1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 30f)
        {
          func_1175(5);
        }
      }
    }
    if (func_1191(14))
    {
      return 1;
    }
  }
  return 0;
}