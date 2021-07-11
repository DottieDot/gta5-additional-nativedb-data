// fbi2.ysc @ L132891
void func_762()
{
  int iVar0;
  
  iVar0 = func_703();
  if (!PED::IS_PED_INJURED(iVar0))
  {
    if (iLocal_498 < 0)
    {
      if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), 0))
      {
        iLocal_498 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"));
      }
      else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_CARBINERIFLE"), 0))
      {
        iLocal_498 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_CARBINERIFLE"));
      }
    }
    if (WEAPON::GET_AMMO_IN_PED_WEAPON(iVar0, func_702(5)) == 0)
    {
      WEAPON::SET_PED_AMMO(iVar0, func_702(5), 1, 0);
    }
    WEAPON::GIVE_WEAPON_TO_PED(iVar0, func_702(5), -1, true, true);
    WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, func_702(5));
    WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, 1);
  }
}