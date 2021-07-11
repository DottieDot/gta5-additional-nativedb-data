// appinternet.c @ L274866
int func_2495(struct<2> Param0, float fParam1)
{
  if (Global_76577 && !NETWORK::NETWORK_CAN_SET_WAYPOINT())
  {
    return 0;
  }
  if (fLocal_193 != Param0 && fLocal_194 != Param0.f_1)
  {
    HUD::SET_NEW_WAYPOINT(Param0, Param0.f_1);
    fLocal_193 = Param0;
    fLocal_194 = Param0.f_1;
    return 1;
  }
  return 1;
}