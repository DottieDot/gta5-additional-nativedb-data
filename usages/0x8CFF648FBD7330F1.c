// fm_mission_controller.c @ L621455
void func_9945()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < Global_4456448.f_88008)
  {
    if (Global_4456448.f_88017[iVar0 /*72*/].f_23 != -1 || Global_4456448.f_88017[iVar0 /*72*/].f_24 != -1)
    {
      if (OBJECT::DOES_PICKUP_EXIST(Global_4456448.f_88017[iVar0 /*72*/].f_25) && OBJECT::DOES_PICKUP_OBJECT_EXIST(Global_4456448.f_88017[iVar0 /*72*/].f_25))
      {
        if (bLocal_7317)
        {
          OBJECT::_0x858EC9FD25DE04AA(Global_4456448.f_88017[iVar0 /*72*/].f_25, 1);
          OBJECT::_0x8CFF648FBD7330F1(50);
        }
        else
        {
          OBJECT::_0x858EC9FD25DE04AA(Global_4456448.f_88017[iVar0 /*72*/].f_25, 0);
        }
        if (MISC::IS_BIT_SET(iLocal_4139, 24))
        {
          if (Global_4456448.f_88017[iVar0 /*72*/].f_23 == 1)
          {
            OBJECT::_0x858EC9FD25DE04AA(Global_4456448.f_88017[iVar0 /*72*/].f_25, 1);
            OBJECT::_0x8CFF648FBD7330F1(50);
          }
        }
      }
    }
    iVar0++;
  }
}