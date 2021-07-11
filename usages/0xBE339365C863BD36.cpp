// armenian2.ysc @ L65140
int func_573(int iParam0)
{
  int iVar0;
  
  if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
  {
    return 0;
  }
  iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
  HUD::SET_BLIP_SCALE(iVar0, func_275(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
  return iVar0;
}