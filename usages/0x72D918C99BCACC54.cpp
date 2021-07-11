// am_casino_peds.ysc @ L329224
int func_4171(int iParam0)
{
  struct<13> Var0;
  
  Var0 = { func_1391(iParam0) };
  if (MISC::IS_DURANGO_VERSION())
  {
    if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
    {
      if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
      {
        return 1;
      }
    }
  }
  return 0;
}