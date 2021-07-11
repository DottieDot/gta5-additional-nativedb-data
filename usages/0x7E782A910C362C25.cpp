// maintransition.ysc @ L275226
int func_3631(var uParam0)
{
  if (NETWORK::NETWORK_CAN_ENTER_MULTIPLAYER() == 0)
  {
    return 0;
  }
  if (NETWORK::NETWORK_IS_MULTIPLAYER_DISABLED())
  {
    return 0;
  }
  if (func_4244() == 0 && func_716() == 0)
  {
    return 0;
  }
  func_3632(uParam0->f_352);
  if (func_417() != 21)
  {
    func_4198(0);
    func_554(999);
    func_4235(5);
  }
  return 0;
}