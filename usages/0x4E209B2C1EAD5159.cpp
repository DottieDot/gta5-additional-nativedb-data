// am_pi_menu.ysc @ L409129
void func_5217()
{
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
  {
    func_1046("PIM_HHEIS3", 0, 0);
  }
  else if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
  {
    func_1046("PIM_HHEIS2", 0, 0);
  }
  else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 3f || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
  {
    func_1046("PIM_HHEIS1", 0, 0);
  }
  else
  {
    func_1046("PIM_HHEISP", 0, 0);
  }
}