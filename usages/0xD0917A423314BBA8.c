// fm_mission_controller.c @ L554465
int func_8791(int iParam0)
{
  int iVar0;
  
  if (!MISC::IS_BIT_SET(Global_4456448.f_156055[iParam0 /*111*/].f_16, 11))
  {
    iVar0 = 1;
  }
  else if (((MISC::IS_BIT_SET(Global_4456448.f_156055[iParam0 /*111*/].f_14, 11) && Global_4456448.f_156055[iParam0 /*111*/].f_36 >= 0) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_4819.f_834.f_81[Global_4456448.f_156055[iParam0 /*111*/].f_36])) && !VEHICLE::_ARE_BOMB_BAY_DOORS_OPEN(NETWORK::NET_TO_VEH(Local_4819.f_834.f_81[Global_4456448.f_156055[iParam0 /*111*/].f_36])))
  {
    iVar0 = 1;
  }
  return iVar0;
}