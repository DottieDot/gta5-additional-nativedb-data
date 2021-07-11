// ingamehud.c @ L114630
void func_853(int iParam0, int iParam1)
{
  if (iParam0 == 0)
  {
    if (func_522())
    {
      func_521(1);
    }
    if (iParam1 == 1)
    {
      NETWORK::NETWORK_SET_ACTIVITY_SPECTATOR(0);
    }
  }
  else if (iParam1 == 1)
  {
    NETWORK::NETWORK_SET_ACTIVITY_SPECTATOR(1);
  }
  Global_1312869 = iParam0;
}