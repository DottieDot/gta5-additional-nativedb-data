// am_hunt_the_beast.ysc @ L112237
void func_566(int iParam0)
{
  int iVar0;
  
  if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_100, iParam0))
  {
    iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
    PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(iVar0, PLAYER::PLAYER_ID(), true);
    PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iParam0, true);
    PLAYER::_0x55FCC0C390620314(iParam0, PLAYER::PLAYER_ID(), true);
    func_567(1, iParam0);
    MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_100), iParam0);
  }
}