// agency_heist1.ysc @ L99912
int func_410(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    if (MISC::IS_BIT_SET(Global_111560.f_668.f_1312, 2))
    {
      return 1;
    }
  }
  if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
  {
    if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
    {
      if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
      {
        return 1;
      }
    }
  }
  if (bParam1)
  {
    if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
    {
      return 0;
    }
  }
  if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
  {
    return 1;
  }
  return 0;
}