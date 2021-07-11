// fmmc_launcher.ysc @ L577831
int func_9418()
{
  if ((((!Global_262145.f_4688 && NETWORK::NETWORK_IS_IN_TRANSITION()) && NETWORK::NETWORK_IS_TRANSITION_STARTED()) && NETWORK::NETWORK_IS_TRANSITION_HOST()) && NETWORK::_0x617F49C2668E6155() > 0)
  {
    if (!func_5(&(Local_7318.f_27)))
    {
      func_4(&(Local_7318.f_27), 0, 0);
      return 0;
    }
    else if (func_52(&(Local_7318.f_27), Global_262145.f_4687, 0))
    {
      return 1;
    }
  }
  else if (func_5(&(Local_7318.f_27)))
  {
    func_49(&(Local_7318.f_27));
  }
  return 0;
}