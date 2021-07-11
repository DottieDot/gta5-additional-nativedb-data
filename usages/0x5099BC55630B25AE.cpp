// ambient_diving.ysc @ L1913
int func_49(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
  {
    return 0;
  }
  if (func_50(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
      if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
      {
        if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(iParam0)))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}