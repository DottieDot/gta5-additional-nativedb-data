// agency_heist3a.c @ L125411
int func_786(int iParam0, int iParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
    {
      if (func_787(PLAYER::PLAYER_PED_ID(), iParam0))
      {
        PED::SET_GROUP_SEPARATION_RANGE(func_777(), 50f);
        return 1;
      }
    }
    else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_777()))
    {
      PED::SET_GROUP_SEPARATION_RANGE(func_777(), 50f);
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}