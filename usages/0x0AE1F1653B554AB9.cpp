// main.ysc @ L3061
void func_95()
{
  if (NETWORK::NETWORK_IS_SIGNED_IN())
  {
    if (!MISC::IS_BIT_SET(Global_111560.f_20113.f_290, 8))
    {
      if (NETWORK::_FACEBOOK_IS_AVAILABLE())
      {
        if (HUD::_GET_MINIMAP_REVEAL_PERCENTAGE() >= 0.975f)
        {
          NETWORK::_FACEBOOK_SET_MILESTONE_COMPLETE(5);
          func_96(5);
          MISC::SET_BIT(&(Global_111560.f_20113.f_290), 8);
        }
      }
    }
  }
}