// achievement_controller.ysc @ L13991
int func_114()
{
  float fVar0;
  
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_76577)
  {
    return 0;
  }
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
    {
      fVar0 = HUD::_GET_MINIMAP_REVEAL_PERCENTAGE();
      if (fVar0 > 0.01f && MISC::IS_PC_VERSION())
      {
        func_133(14, SYSTEM::FLOOR((fVar0 * 100f)));
      }
      if (fVar0 >= 0.975f)
      {
        func_127(14, 1);
        return 1;
      }
    }
  }
  return 0;
}