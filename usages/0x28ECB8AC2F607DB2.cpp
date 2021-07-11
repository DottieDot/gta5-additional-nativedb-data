// am_pi_menu.ysc @ L1854
void func_42()
{
  var uVar0;
  
  if (MISC::IS_BIT_SET(iLocal_478, 0))
  {
    if (iLocal_479 == 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_479)) >= 30000)
    {
      iLocal_479 = NETWORK::GET_NETWORK_TIME();
      if (func_35(PLAYER::PLAYER_ID(), 1))
      {
        uVar0 = func_47(func_49(), func_48());
        STATS::_0x28ECB8AC2F607DB2(func_46(func_48()), func_45(func_48()), func_44(), func_43(), uVar0);
      }
    }
    MISC::CLEAR_BIT(&iLocal_478, 0);
  }
}