// abigail1.ysc @ L3580
void func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;
  
  if (iParam2 == -1)
  {
    PED::CLEAR_PED_PROP(iParam0, iParam1);
    if (iParam1 == 0)
    {
      PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
      PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
    }
  }
  else
  {
    PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
    if (iParam1 == 0)
    {
      iVar0 = func_57(iParam0, iParam2, iParam3, iParam1);
      if (func_53(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3)))
      {
        PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
        PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
      }
      else
      {
        PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
        PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
      }
    }
  }
}