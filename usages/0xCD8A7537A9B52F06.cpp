// am_hunt_the_beast.ysc @ L119802
void func_833()
{
  Global_2458961 = PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
  func_413();
  PED::_0x687C0B594907D2E8(PLAYER::PLAYER_PED_ID());
  PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, true);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 407, true);
  PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 100f, 1);
  PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), Global_262145.f_11216);
  ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), Global_262145.f_11216, 0);
  PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), 0);
  PED::_0x711794453CFD692B(PLAYER::PLAYER_PED_ID(), 1);
  PLAYER::_0x8D768602ADEF2245(PLAYER::PLAYER_ID(), 500f);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 410, true);
  ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
  PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 411, true);
  Global_2458958 = 0;
  func_9(&Global_2458959);
  MISC::_SET_PLAYER_IS_IN_ANIMAL_FORM(1);
  PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), 0);
  NETWORK::_0xC505036A35AFD01B(1);
  MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_195), 29);
  func_411(1);
}