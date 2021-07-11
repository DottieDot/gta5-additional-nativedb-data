// taxi_clowncar.ysc @ L5386
void func_173(var uParam0, var uParam1)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
  {
    uParam1->f_88 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1f, 0, 0, 0);
    uParam1->f_89 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1f, 0, 0, 0);
  }
  GRAPHICS::_0x8CDE909A0370BB3A(1);
}