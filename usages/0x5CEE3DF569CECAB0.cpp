// barry2.ysc @ L44036
void func_454()
{
  int iVar0;
  
  if (func_62(PLAYER::PLAYER_PED_ID()))
  {
    if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_255, 0))
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_255, -1, true, true);
    }
    else if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1) || iVar0 != iLocal_255)
    {
      WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_255, true);
    }
    WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_255, 10000);
    WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 1, iLocal_255);
    WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
    PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
    if (WEAPON::DOES_WEAPON_TAKE_WEAPON_COMPONENT(iLocal_255, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02")))
    {
      WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_255, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"));
    }
    PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
  }
}