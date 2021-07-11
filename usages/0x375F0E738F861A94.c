// fm_lts_creator.c @ L7062
void func_73()
{
  if (func_38())
  {
    if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
      ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
    }
  }
  PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
}