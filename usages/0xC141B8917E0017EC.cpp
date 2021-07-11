// main.ysc @ L3123
void func_98()
{
  if (NETWORK::NETWORK_IS_SIGNED_IN())
  {
    if (NETWORK::_FACEBOOK_IS_AVAILABLE())
    {
      if (MISC::GET_PROFILE_SETTING(904) != 1)
      {
        if (STATS::_0x5EAD2BF6484852E4())
        {
          NETWORK::_FACEBOOK_SET_MILESTONE_COMPLETE(2);
          func_96(2);
          STATS::_0xC141B8917E0017EC();
        }
      }
    }
  }
}