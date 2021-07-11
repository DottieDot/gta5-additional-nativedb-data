// fm_bj_race_controler.ysc @ L313918
char* func_4338()
{
  vector3 vVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  }
  if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(vVar0) == -289320599)
  {
    return "MP_MC_START_CITY";
  }
  if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(vVar0) == 2072609373)
  {
    return "MP_MC_START_COUNTRY";
  }
  return "MP_MC_START";
}