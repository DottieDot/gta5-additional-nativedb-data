// am_gang_call.c @ L17555
int func_505(int iParam0)
{
  if (PLAYER::_0x690A61A6D13583F6(iParam0))
  {
    return 0;
  }
  if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0)))
  {
    return 1;
  }
  return 0;
}