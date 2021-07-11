// am_mp_rc_vehicle.c @ L113278
int func_972(int iParam0)
{
  int iVar0;
  var uVar1;
  int iVar2;
  
  if (iParam0 == 0)
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
    }
    else
    {
      iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
    }
    if (INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      INTERIOR::_GET_INTERIOR_INFO(iVar0, &uVar1, &iVar2);
      if (func_973(iVar2))
      {
        return 1;
      }
    }
  }
  else if (func_973(iParam0))
  {
    return 1;
  }
  return 0;
}