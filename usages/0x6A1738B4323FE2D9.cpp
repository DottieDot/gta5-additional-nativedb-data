// am_hunt_the_beast.ysc @ L112352
void func_571()
{
  if (MISC::IS_PC_VERSION())
  {
    NETWORK::_0x265559DA40B3F327(1);
    if (func_505(1))
    {
      HUD::_OVERRIDE_MULTIPLAYER_CHAT_PREFIX(joaat("PI_BIK_0_T"));
    }
    else
    {
      HUD::_OVERRIDE_MULTIPLAYER_CHAT_PREFIX(-1755491431);
    }
  }
}