// am_casino_peds.c @ L108062
int func_1086(vector3 vParam0, vector3 vParam1)
{
  if (func_1087(vParam0, 99) || func_1087(vParam1, 99))
  {
    return 3;
  }
  return STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(vParam0, vParam1);
}