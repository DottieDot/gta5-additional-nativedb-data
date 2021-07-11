// agency_prep2amb.c @ L10766
int func_222(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (func_250(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
    if (func_85(iVar0))
    {
      iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
      if ((iVar1 == joaat("CARGOBOB") || iVar1 == joaat("CARGOBOB2")) || iVar1 == joaat("cargobob3"))
      {
        if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
        {
          iVar2 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0);
          if (ENTITY::DOES_ENTITY_EXIST(iVar2))
          {
            *uParam0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
            if (func_85(*uParam0))
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}