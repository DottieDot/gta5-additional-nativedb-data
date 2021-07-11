// agency_heist3b.c @ L129880
void func_885(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
  if (bParam2)
  {
    if (HUD::DOES_BLIP_EXIST(iParam0->f_3))
    {
      HUD::REMOVE_BLIP(&(iParam0->f_3));
    }
    func_540(&(iParam0->f_3), *iParam0, 0);
  }
  PED::SET_PED_ACCURACY(*iParam0, iParam1);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
  PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
  PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, 0);
  PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, 0);
  PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 35, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 36, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 29, true);
  PED::SET_PED_CONFIG_FLAG(*iParam0, 188, true);
  if (bParam3)
  {
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_434);
  }
  else
  {
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_433);
  }
}