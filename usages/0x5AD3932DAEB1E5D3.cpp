// main.ysc @ L102199
void func_497()
{
  if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
  {
    Global_76385 = 1;
    Global_100758 = 1;
    func_684(1);
    func_498();
    VEHICLE::SET_RANDOM_TRAINS(0);
    VEHICLE::DELETE_ALL_TRAINS();
    NETWORK::NETWORK_BLOCK_INVITES(1);
    Global_4 = 1;
    REPLAY::_0x5AD3932DAEB1E5D3();
  }
}