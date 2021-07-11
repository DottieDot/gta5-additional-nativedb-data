// abigail2.ysc @ L35346
int func_256(int iParam0)
{
  if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
  {
    return 1;
  }
  return 0;
}