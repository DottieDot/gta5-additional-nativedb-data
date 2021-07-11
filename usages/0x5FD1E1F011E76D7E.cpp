// am_pi_menu.ysc @ L422909
void func_5389()
{
  int iVar0;
  int iVar1;
  
  if (func_498(iLocal_629) != 0)
  {
    iVar0 = WEAPON::_GET_PED_AMMO_TYPE_FROM_WEAPON_2(PLAYER::PLAYER_PED_ID(), iLocal_629);
    iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0);
    WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0, (iVar1 + iLocal_630));
  }
  else if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_629, 0))
  {
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_629, iLocal_630, false, true);
  }
  else
  {
    WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_629, iLocal_630);
  }
  iLocal_629 = 0;
  iLocal_630 = -1;
  iLocal_611 = MISC::GET_GAME_TIMER();
  MISC::CLEAR_BIT(&iLocal_532, 15);
  func_392(1, 1, 0, "GIVE_OUT_PURCHASED_AMMO");
  Global_2509240 = 1;
}