// ob_telescope.c @ L79973
int func_349()
{
  if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
    return 1;
  }
  return 0;
}