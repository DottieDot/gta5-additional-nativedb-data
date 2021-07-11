// code_controller.c @ L33891
void func_303(int iParam0)
{
  vector3 vVar0;
  
  if (iParam0 == 1)
  {
    if (!MISC::IS_BIT_SET(Global_98669.f_20, 19))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
      if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
      {
        PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
      }
      ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), false);
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), true);
      ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
      if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
      {
        ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, 0);
      }
      ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
      WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID());
      vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
      MISC::CLEAR_AREA(vVar0, 100f, 1, 0, 0, false);
      MISC::SET_BIT(&(Global_98669.f_20), 19);
    }
  }
  else if (MISC::IS_BIT_SET(Global_98669.f_20, 19))
  {
    func_304();
    MISC::CLEAR_BIT(&(Global_98669.f_20), 19);
  }
}