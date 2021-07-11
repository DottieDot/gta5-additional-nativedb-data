// am_mp_nightclub.ysc @ L315098
int func_4838(char* sParam0, char* sParam1, int iParam2)
{
  float fVar0;
  float fVar1;
  
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sParam0, sParam1, 3))
  {
    fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sParam0, sParam1);
    fVar1 = ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(PLAYER::PLAYER_PED_ID(), sParam0, sParam1);
    if (fVar0 > 0f)
    {
      return SYSTEM::ROUND((fVar1 - (fVar1 * fVar0))) < iParam2;
    }
  }
  return 0;
}