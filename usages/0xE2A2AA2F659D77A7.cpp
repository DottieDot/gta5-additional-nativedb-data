// am_ammo_drop.ysc @ L3695
void func_126()
{
  if (!MISC::IS_BIT_SET(iLocal_63, 10))
  {
    if (func_35(Local_60.f_2))
    {
      TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("CUBAN800"), 262144, 15f, -1f);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("CUBAN800"), 262144, -1f, -1f);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
      MISC::SET_BIT(&iLocal_63, 10);
    }
  }
}