// agency_heist1.c @ L1724
void func_36(int iParam0)
{
  if (!PED::IS_PED_INJURED(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
  {
    PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 0);
    PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0, 0);
  }
}