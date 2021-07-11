// barry3a.ysc @ L45418
void func_420()
{
  if (func_204(Local_43.f_4))
  {
    VEHICLE::SET_VEHICLE_STRONG(Local_43.f_4, true);
    VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_43.f_4, true);
    VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_43.f_4, false);
    VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_43.f_4, false);
    if (!bLocal_46)
    {
      VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_43.f_4);
    }
    func_421(Local_43.f_4, 0);
  }
}