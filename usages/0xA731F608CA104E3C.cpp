// gb_biker_destroy_vans.ysc @ L1159
void func_31(int iParam0, int iParam1, int iParam2)
{
  PED::SET_PED_KEEP_TASK(iParam0, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 42, true);
  PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, true);
  PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 57, false);
  PED::SET_PED_COMBAT_RANGE(iParam0, 2);
  PED::SET_PED_SEEING_RANGE(iParam0, 299f);
  PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 3);
  PED::SET_DRIVER_AGGRESSIVENESS(iParam0, 1f);
  if (iParam1 == -1)
  {
    PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
    PED::SET_DRIVER_RACING_MODIFIER(iParam0, 1f);
    PED::SET_COMBAT_FLOAT(iParam0, 17, 2f);
    func_38(iParam2, 8);
  }
  else
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, true);
  }
  func_32(&iParam0, -1);
}