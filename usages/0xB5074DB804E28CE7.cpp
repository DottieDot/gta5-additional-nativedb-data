// am_mp_arena_garage.ysc @ L283914
void func_4065(var uParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 12)
  {
    func_4066(&(Global_1841022[iVar0 /*13*/]));
    StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
    iVar0++;
  }
  if ((uParam0[0 /*100*/])->f_76 > 0)
  {
    (uParam0[0 /*100*/])->f_76 = 0;
    (uParam0[1 /*100*/])->f_76 = 0;
    if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
    {
      NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
    }
  }
  if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
  {
    NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
  }
  Global_1841022.f_206 = 0;
}