// finalec2.c @ L45590
void func_379(bool bParam0)
{
  int iVar0;
  bool bVar1;
  
  iVar0 = 0;
  while (iVar0 < iLocal_49)
  {
    if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
    {
      bVar1 = true;
      func_380(iLocal_49[iVar0], bVar1);
    }
    iVar0++;
  }
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (bParam0)
    {
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
      ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, 0, false);
      PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 1);
    }
    PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
    PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
    PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 211, false);
    if (iLocal_43 < 0)
    {
      PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
      ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200, 0);
    }
  }
}