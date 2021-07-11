// freemode.c @ L770269
void func_11198(var uParam0)
{
  bool bVar0;
  
  if (uParam0->f_24)
  {
    bVar0 = true;
  }
  if (bVar0)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_31, 0))
      {
        CAM::_0x4008EDF7D6E48175(1);
        if (func_532(0))
        {
          PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
          PAD::DISABLE_CONTROL_ACTION(0, 66, 1);
          PAD::DISABLE_CONTROL_ACTION(0, 67, 1);
          PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
          PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
          PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
          PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
          PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
        }
      }
    }
  }
}