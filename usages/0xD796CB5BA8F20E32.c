// act_cinema.c @ L91571
int func_508(int iParam0)
{
  if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
  {
    return 1;
  }
  return 0;
}