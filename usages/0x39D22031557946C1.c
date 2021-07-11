// am_pi_menu.c @ L49089
int func_397(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
  {
    if (iParam1 && func_498(iParam0) != 0)
    {
      iVar2 = WEAPON::_GET_PED_AMMO_TYPE_FROM_WEAPON_2(PLAYER::PLAYER_PED_ID(), iParam0);
      if (WEAPON::_GET_MAX_AMMO_2(PLAYER::PLAYER_PED_ID(), iVar2, &iVar0))
      {
        if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar2) >= iVar0)
        {
          iVar1 = 1;
        }
      }
    }
    else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
    {
      if (WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar0))
      {
        if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) >= iVar0)
        {
          iVar1 = 1;
        }
      }
    }
  }
  return iVar1;
}