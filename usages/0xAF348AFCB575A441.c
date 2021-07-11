// range_modern.c @ L116404
void func_793(var uParam0, var uParam1)
{
  INTERIOR::_0xAF348AFCB575A441("V_7_ShootRm");
  MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_113, 20f, 0, 0, 0, 0, false, 0);
  func_794(&(uParam0->f_39));
  PED::SET_PED_STEALTH_MOVEMENT(iLocal_99, 0, 0);
  if (uParam0->f_20 == 0)
  {
    uParam0->f_20 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam1->f_113);
    INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_20);
  }
}