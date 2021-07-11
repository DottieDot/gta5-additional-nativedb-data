// fm_mission_controller.ysc @ L665079
void func_10776(int iParam0, int iParam1, bool bParam2)
{
  if ((!bParam2 && !MISC::IS_BIT_SET(iLocal_7290, (16 + iParam1))) || (bParam2 && !MISC::IS_BIT_SET(iLocal_7290, (0 + iParam1))))
  {
    if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
    {
      NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
    }
    else if (!bParam2)
    {
      OBJECT::_0x39A5FB7EAF150840(iParam0, 0);
      MISC::SET_BIT(&iLocal_7290, (16 + iParam1));
    }
    else
    {
      OBJECT::_0x39A5FB7EAF150840(iParam0, 1);
      MISC::SET_BIT(&iLocal_7290, (0 + iParam1));
    }
  }
}