// fm_race_creator.c @ L401832
int func_6147(int iParam0)
{
  struct<13> Var0;
  
  if (!MISC::IS_DURANGO_VERSION())
  {
    return 0;
  }
  Var0 = { func_135(iParam0) };
  if (NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&Var0))
  {
    return 0;
  }
  return 1;
}