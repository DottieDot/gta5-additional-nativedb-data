// am_hold_up.c @ L1547
int func_32()
{
  int iVar0;
  int iVar1;
  
  if (PAD::IS_CONTROL_JUST_PRESSED(0, 24) || PAD::IS_CONTROL_JUST_PRESSED(0, 257))
  {
    iVar0 = func_33(PLAYER::PLAYER_PED_ID());
    if ((((((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != 0) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_BULLET")) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_BUZZARD")) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_LASER")) && iVar0 != joaat("VEHICLE_WEAPON_TANK")) && iVar0 != joaat("WEAPON_FLARE"))
    {
      iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
      if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
      {
        if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_139)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}