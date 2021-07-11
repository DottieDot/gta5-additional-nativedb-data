// agency_heist3a.c @ L143157
int func_1077(int iParam0)
{
  vector3 vVar0;
  float fVar1;
  
  vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_121, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  fVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
  fVar1 = fVar1;
  switch (iParam0)
  {
    case 0:
      if (PLAYER::_0xDD2620B7B9D16FF1(PLAYER::PLAYER_ID(), 0.7f))
      {
        if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_121, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1f, 1.1f, -1.3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1f, 1.1f, 1f), 1.6f, 0, true, 0))
        {
          return 1;
        }
      }
      break;
    
    case 1:
      if (PLAYER::_0xDD2620B7B9D16FF1(PLAYER::PLAYER_ID(), 0.4f))
      {
        if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_121, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -0.5f, 0.5f, -1.3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, 0.5f, 1f), 0.75f, 0, true, 0))
        {
          return 1;
        }
      }
      break;
  }
  return 0;
}