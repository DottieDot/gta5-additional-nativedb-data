// agency_heist2.ysc @ L19904
void func_322()
{
  if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      func_325();
    }
    return;
  }
  if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
  {
    func_325();
    return;
  }
  func_323();
  if (Global_98392 > 0)
  {
    return;
  }
  STREAMING::_0x74DE2E8739086740();
}