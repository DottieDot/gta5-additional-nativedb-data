// am_casino_peds.c @ L156698
char* func_1493(int iParam0)
{
  var uVar0;
  struct<13> Var1;
  
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0 /*16*/])))
  {
    if (MISC::GET_HASH_KEY(&(Global_22350.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
    {
      Var1 = { func_1391(PLAYER::PLAYER_ID()) };
      NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
      return func_1492(&uVar0);
    }
    else
    {
      return func_1492(&(Global_22350.f_6020[iParam0 /*16*/]));
    }
  }
  if (iParam0 == 50)
  {
    return "MPShopSale";
  }
  return "CommonMenu";
}