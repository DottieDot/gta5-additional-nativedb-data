// barry1.c @ L2914
void func_82()
{
  if (iLocal_127 == iLocal_123 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_127, 0))
  {
    WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, iLocal_127);
  }
  if (func_574(PLAYER::PLAYER_PED_ID()))
  {
    func_565(PLAYER::PLAYER_PED_ID(), 1);
    func_564(PLAYER::PLAYER_PED_ID(), 0);
  }
  SYSTEM::START_NEW_SCRIPT("postRC_Barry1and2", 1424);
  SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("postRC_Barry1and2");
  func_83(69, 1);
  func_538();
}