// finale_heist2a.c @ L125688
void func_837()
{
  if (!bLocal_208 && VEHICLE::IS_VEHICLE_DRIVEABLE(vLocal_798[0 /*3*/], 0))
  {
    if (!VEHICLE::IS_VEHICLE_TYRE_BURST(vLocal_798[0 /*3*/], 5, 0))
    {
      VEHICLE::SET_VEHICLE_TYRE_BURST(vLocal_798[0 /*3*/], 5, 0, 1f);
      VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(vLocal_798[0 /*3*/], false);
      iLocal_252 = 1;
    }
  }
}