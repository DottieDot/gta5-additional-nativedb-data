// franklin0.c @ L127626
void func_910()
{
  if (!bLocal_338)
  {
    PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_234, 0);
    if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_234))
    {
      PED::KNOCK_PED_OFF_VEHICLE(Local_234);
      iLocal_339 = 0;
    }
    else
    {
      iLocal_339 = 1;
    }
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_279[1], 0))
    {
      ENTITY::SET_ENTITY_PROOFS(iLocal_279[1], false, false, false, false, false, false, 0, false);
      VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_279[1], 0);
      VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_279[1], true);
      VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_279[1], true);
    }
    RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
    iLocal_605 = MISC::GET_GAME_TIMER();
    bLocal_338 = true;
  }
}