// fm_mission_controller.c @ L721743
void func_11958()
{
  int iVar0;
  int iVar1;
  
  if (!MISC::IS_BIT_SET(iLocal_4143, 0))
  {
    if (Local_4814.f_243 > 0 && Local_4814.f_243 <= 32)
    {
      iVar0 = 0;
      while (iVar0 <= (Local_4814.f_243 - 1))
      {
        if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_4819.f_834.f_81[iVar0]))
        {
          iVar1 = NETWORK::NET_TO_VEH(Local_4819.f_834.f_81[iVar0]);
          if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
          {
            if (MISC::IS_BIT_SET(Global_4456448.f_92415[iVar0 /*282*/].f_55, 3))
            {
              if (VEHICLE::_GET_CAN_VEHICLE_JUMP(iVar1))
              {
                VEHICLE::_SET_USE_HIGHER_VEHICLE_JUMP_FORCE(iVar1, 1);
              }
            }
          }
        }
        iVar0++;
      }
      MISC::SET_BIT(&iLocal_4143, 0);
    }
  }
}