// minute2.c @ L46793
void func_442()
{
  if (iLocal_478 == 0)
  {
    TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
    if (func_5(iLocal_55[iLocal_386]))
    {
      TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_55[iLocal_386], "Min2_Bike02", 786468, 28, 0, -1, -1f, 0, 1073741824);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], vLocal_449[44 /*3*/], 24f, 0, joaat("SANCHEZ"), 786468, 20f, 5f);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], vLocal_449[45 /*3*/], 24f, 0, joaat("SANCHEZ"), 786468, 20f, 5f);
      TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], vLocal_449[46 /*3*/], 24f, 0, joaat("SANCHEZ"), 786468, 20f, 5f);
      TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_55[iLocal_386], 24f, 786468);
    }
    TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
    TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
    TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
    if (func_5(iLocal_56))
    {
      if (func_5(iLocal_55[iLocal_386]))
      {
        TASK::TASK_VEHICLE_ESCORT(0, iLocal_56, iLocal_55[iLocal_386], -1, 40f, 262144, fLocal_385, 20, 20f);
      }
    }
    TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
    iLocal_478 = 1;
  }
}