// act_cinema.ysc @ L100807
int func_693(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 32)
  {
    iVar1 = iVar0;
    if (!iVar1 == PLAYER::PLAYER_ID())
    {
      if (func_35(iVar1, 1, 1))
      {
        if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 1))
        {
          if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(iVar1)) == iParam0)
          {
            return 1;
          }
        }
      }
    }
    iVar0++;
  }
  return 0;
}