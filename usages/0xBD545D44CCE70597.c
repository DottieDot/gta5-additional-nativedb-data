// agency_heist3b.c @ L144071
int func_1055()
{
  if (MISC::IS_ORBIS_VERSION())
  {
    if (!NETWORK::_0xBD545D44CCE70597())
    {
      if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
      {
        return 0;
      }
      if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
      {
        return 0;
      }
      if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
      {
        return 0;
      }
      if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
      {
        return 0;
      }
    }
  }
  return 1;
}