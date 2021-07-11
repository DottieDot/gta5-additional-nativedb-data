// act_cinema.c @ L91628
void func_510(int iParam0)
{
  if (Global_2405071.f_673 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_672) < 30000)
  {
    if (iParam0 == -1 || (iParam0 > -1 && Global_2405071.f_673 < iParam0))
    {
      Global_2405071.f_668 = 2;
    }
    else
    {
      Global_2405071.f_668 = 5;
    }
  }
  else
  {
    Global_2405071.f_668 = 5;
  }
}