// assassin_construction.ysc @ L18599
void func_379()
{
  iLocal_1423 = func_380(1);
  if (iLocal_1423 != 0)
  {
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_1423, 0, false, false);
  }
  else
  {
    iLocal_1423 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_1423, 0, false, false);
  }
}