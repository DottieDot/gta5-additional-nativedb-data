// am_mp_arcade.ysc @ L323408
int func_4839(var uParam0, char* sParam1, char* sParam2)
{
  char* sVar0;
  
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    return 0;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
  {
    return 0;
  }
  if (!func_4847(uParam0))
  {
    return 0;
  }
  if (!func_4846())
  {
    return 0;
  }
  func_4843(uParam0);
  sVar0 = func_4828();
  NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_64, sVar0, sParam1, 1.5f, -1.5f, 13, 16, 1148846080, 0);
  NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(func_4840(uParam0), uParam0->f_64, sVar0, sParam2, 1.5f, -1.5f, 13);
  NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_64);
  return 1;
}