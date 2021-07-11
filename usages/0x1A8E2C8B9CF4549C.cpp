// am_mp_armory_truck.ysc @ L297641
void func_4235(char* sParam0)
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    return;
  }
  if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("GtaMloRoom001"))
  {
  }
  else
  {
    GRAPHICS::ADD_TCMODIFIER_OVERRIDE("mp_gr_int01_black", sParam0);
  }
}