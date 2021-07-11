// am_armybase.c @ L3216
int func_97()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
    {
      if (func_6(iVar0))
      {
        if (!func_5(iVar0, 1) && !func_4(iVar0))
        {
          return 0;
        }
      }
    }
  }
  return 1;
}