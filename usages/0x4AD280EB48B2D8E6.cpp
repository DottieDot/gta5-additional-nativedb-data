// fm_mission_controller.ysc @ L717407
void func_11812(int iParam0, int iParam1)
{
  if (Global_4456448.f_92415[iParam0 /*282*/].f_236 == 0 || Global_4456448.f_92415[iParam0 /*282*/].f_236 == 1)
  {
    func_11817(iParam0, iParam1);
    if (!MISC::IS_BIT_SET(Local_4819.f_1550, iParam0))
    {
      if (!MISC::IS_BIT_SET(Local_4819.f_1549, iParam0))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_4819.f_834.f_81[iParam0]) && func_382(NETWORK::NET_TO_ENT(Local_4819.f_834.f_81[iParam0])))
        {
          VEHICLE::_0x4AD280EB48B2D8E6(NETWORK::NET_TO_VEH(Local_4819.f_834.f_81[iParam0]), 1);
          func_11816(1, 0, iParam0, 0);
        }
      }
      else if (Global_4456448.f_92415[iParam0 /*282*/].f_236 == 1)
      {
        if (func_11813(iParam1))
        {
          func_11816(0, 0, iParam0, 1);
        }
      }
    }
    else if (MISC::IS_BIT_SET(Local_4819.f_1549, iParam0))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_4819.f_834.f_81[iParam0]) && func_382(NETWORK::NET_TO_ENT(Local_4819.f_834.f_81[iParam0])))
      {
        VEHICLE::_0x4AD280EB48B2D8E6(NETWORK::NET_TO_VEH(Local_4819.f_834.f_81[iParam0]), 0);
        func_11816(0, 1, iParam0, 0);
      }
    }
  }
}