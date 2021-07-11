// fbi4_prep1.c @ L6170
void func_194(var uParam0)
{
  int iVar0;
  
  if (func_37(iLocal_43))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0, joaat("TRASH"), 786469, 10f, 15f);
    TASK::TASK_VEHICLE_PARK(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_10, 5f, 1);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
    uParam0->f_7 = 6;
  }
}