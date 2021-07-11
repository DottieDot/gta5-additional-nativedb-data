// chop.c @ L8380
void func_148(int iParam0)
{
  int iVar0;
  
  WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
  if (iLocal_74 == 1 && iVar0 != joaat("WEAPON_UNARMED"))
  {
    iParam0 = 0;
  }
  if (iParam0 == 1)
  {
    if (iLocal_74 == 0 && iVar0 == joaat("WEAPON_UNARMED"))
    {
      PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, true);
      ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, 1, 0);
      PED::_0x061CB768363D6424(iLocal_69, 1);
      PED::_0xFD325494792302D7(iLocal_69, 1);
      iLocal_74 = 1;
    }
  }
  else if (iLocal_74 == 1)
  {
    PED::SET_PED_CAN_BE_TARGETTED(iLocal_69, false);
    ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_69, 0, 0);
    PED::_0x061CB768363D6424(iLocal_69, 0);
    iLocal_74 = 0;
  }
}