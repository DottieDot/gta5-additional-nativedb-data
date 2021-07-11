// business_battles_sell.c @ L42824
void func_570(int iParam0)
{
  if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
  {
    VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
  }
  VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 1);
  VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, "PR1NCE");
  VEHICLE::SET_VEHICLE_MOD(iParam0, 14, 45, false);
}