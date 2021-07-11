// act_cinema.ysc @ L117886
void func_1063()
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
  {
    if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
    {
      iVar0 = 0;
      while (iVar0 < 8)
      {
        Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
        iVar0++;
      }
      MISC::SET_BIT(&(Global_2359302.f_67), 2);
      MISC::SET_BIT(&(Global_2359302.f_67), 0);
    }
  }
}