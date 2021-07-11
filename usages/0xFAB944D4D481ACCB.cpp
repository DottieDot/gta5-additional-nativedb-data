// freemode.ysc @ L876592
void func_13105(int iParam0)
{
  if (func_13189(iParam0))
  {
    PED::_0xFAB944D4D481ACCB(PLAYER::PLAYER_PED_ID(), 1);
  }
  else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1695606) && !ENTITY::IS_ENTITY_IN_AIR(Global_1695606))
  {
    func_5893(Global_1695606, 1093140480, SYSTEM::CEIL((2000f / 1000f)), 1056964608, 0, 1, 0);
  }
  if (!CAM::IS_SCREEN_FADING_OUT())
  {
    CAM::DO_SCREEN_FADE_OUT(2000);
  }
}