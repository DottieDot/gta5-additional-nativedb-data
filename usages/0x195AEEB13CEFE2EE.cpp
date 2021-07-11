// fbi4_prep1.ysc @ L3879
void func_130(bool bParam0)
{
  if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_43, 0, 0))
  {
    func_131(bParam0);
    if (iLocal_48 != (iLocal_41 - 1))
    {
      if (iLocal_48 == 4)
      {
        TASK::TASK_VEHICLE_GOTO_NAVMESH(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 2883755, Local_46[iLocal_48 /*25*/].f_6);
      }
      else
      {
        TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0, 0, 2883755, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
      }
      Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
      Local_45[0 /*11*/].f_7 = 4;
    }
    else
    {
      TASK::TASK_VEHICLE_DRIVE_WANDER(Local_45[0 /*11*/], iLocal_43, 15f, 786599);
      Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
      Local_45[0 /*11*/].f_7 = 10;
    }
  }
  else
  {
    Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
    Local_45[0 /*11*/].f_7 = 7;
  }
}