// fm_mission_controller.ysc @ L524291
void func_8328(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (MISC::ARE_STRINGS_EQUAL(sLocal_4404, "MPH_PAC_WIT_MCS1"))
  {
    iVar0 = Global_4456448.f_181700[iParam0 /*472*/].f_449[0 /*4*/];
    if (iVar0 > -1)
    {
      iVar1 = NETWORK::NET_TO_VEH(Local_4819.f_834.f_81[iVar0]);
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
      {
        if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar1, iLocal_1071))
        {
          VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar1, 0);
        }
      }
    }
  }
}