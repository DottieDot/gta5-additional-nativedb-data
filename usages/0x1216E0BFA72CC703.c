// family1.c @ L27805
void func_434(int iParam0, int iParam1, bool bParam2)
{
  PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 64);
  PED::SET_PED_RESET_FLAG(iParam0, iParam1, bParam2);
  PED::_0x1216E0BFA72CC703(iParam0, 1);
  PED::SET_PED_RESET_FLAG(iParam0, 249, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
  PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
}