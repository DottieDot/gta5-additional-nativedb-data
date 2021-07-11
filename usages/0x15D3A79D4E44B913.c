// am_destroy_veh.c @ L5596
void func_205()
{
  if (Local_103.f_12 == 2)
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_2))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_103.f_2), 0))
      {
        TASK::OPEN_SEQUENCE_TASK(&iLocal_107);
        TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_103.f_2), Local_103.f_20, 7f, iLocal_110, 3f);
        TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
        TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_103.f_24, 1f, -1, 1048576000, 0, Local_103.f_27);
        TASK::CLOSE_SEQUENCE_TASK(iLocal_107);
      }
    }
  }
}