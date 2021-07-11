// agency_heist1.c @ L100758
int func_434(vector3 vParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
  HUD::SET_BLIP_SCALE(iVar0, func_69(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
  HUD::SET_BLIP_ROUTE(iVar0, bParam1);
  return iVar0;
}