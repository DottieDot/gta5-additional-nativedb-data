// fm_mission_controller.ysc @ L637724
void func_10197()
{
  int iVar0;
  
  if (Global_4456448.f_106[Local_6942[iLocal_1075 /*287*/].f_1 /*11610*/].f_10645 > -1 && Global_4456448.f_106[Local_6942[iLocal_1075 /*287*/].f_1 /*11610*/].f_10645 <= Local_5532[Local_6942[iLocal_1075 /*287*/].f_1])
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2424073[iLocal_1071 /*421*/].f_40))
    {
      iVar0 = NETWORK::NET_TO_VEH(Global_2424073[iLocal_1071 /*421*/].f_40);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        if (func_237(iVar0, 1, 1, 0, 0, 0, 1, 0, 1))
        {
          if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Global_2424073[iLocal_1071 /*421*/].f_40))
          {
            VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
            VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, 1);
            VEHICLE::SET_VEHICLE_UNDRIVEABLE(iVar0, true);
          }
          else
          {
            NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Global_2424073[iLocal_1071 /*421*/].f_40);
          }
        }
      }
    }
  }
}