// epsilon7.ysc @ L98359
void func_422()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_48))
  {
    if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tom_Epsilon", joaat("ig_tomepsilon"))))
    {
      iLocal_48 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Tom_Epsilon", joaat("ig_tomepsilon")));
    }
  }
}