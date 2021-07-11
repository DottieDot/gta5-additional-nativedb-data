// am_armwrestling.ysc @ L8870
int func_145()
{
  if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_GET_AGE_GROUP() == 3)
  {
    return 1;
  }
  if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_GET_AGE_GROUP() == 3)
  {
    return 1;
  }
  if (MISC::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0)
  {
    return 1;
  }
  if (MISC::IS_DURANGO_VERSION() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0)
  {
    return 1;
  }
  if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
  {
    return 1;
  }
  return 0;
}