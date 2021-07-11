// fm_capture_creator.c @ L10582
void func_97(bool bParam0)
{
  if (bParam0)
  {
    if (NETWORK::NETWORK_CAN_SESSION_END() == 0)
    {
      func_104(2);
      Global_1312851 = 0;
      Global_1312850 = bParam0;
    }
  }
  else if (NETWORK::NETWORK_CAN_SESSION_END())
  {
    if (func_99() == 0)
    {
      NETWORK::NETWORK_SESSION_LEAVE_SINGLE_PLAYER();
    }
    func_98();
    Global_1312851 = 1;
    Global_1312850 = bParam0;
  }
  if (bParam0 == 0)
  {
    if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() == 0 || NETWORK::NETWORK_IS_SIGNED_IN() == 0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() == 0)
    {
      Global_1312851 = 1;
      Global_1312850 = bParam0;
    }
  }
}