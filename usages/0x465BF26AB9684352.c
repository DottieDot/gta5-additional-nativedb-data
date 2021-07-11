// finalec1.c @ L1476
void func_35(int iParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230[iParam0], 0))
  {
    VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_230[iParam0], false);
    VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_230[iParam0], false);
    VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_230[iParam0], 1);
  }
}