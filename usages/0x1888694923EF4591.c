// fmmc_launcher.c @ L578392
void func_9447(bool bParam0)
{
  if (bParam0)
  {
    if (Local_7370 != 0)
    {
      func_9449(Global_2449755.f_3463, 68);
      NETWORK::_0x1888694923EF4591();
    }
    Global_2449755.f_3463 = func_9();
    func_9448();
  }
  else if (Local_7370 != 0 && Global_2449755.f_3463.f_1 != func_9())
  {
    func_9449(Global_2449755.f_3463.f_1, 68);
  }
  Global_2449755.f_3463.f_1 = func_9();
  Local_7370.f_1 = 0;
  Local_7370 = 0;
}