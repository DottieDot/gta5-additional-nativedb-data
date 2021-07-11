// business_battles.c @ L165739
void func_1793(int iParam0)
{
  int iVar0;
  var uVar1;
  
  if (Global_262145.f_24755)
  {
    if (Global_262145.f_24756 > 0)
    {
      iVar0 = (Global_262145.f_24756 * iParam0);
      if (func_819())
      {
        func_1404(403506509, iVar0, &uVar1, 0, 1, 0);
      }
      else
      {
        MONEY::_NETWORK_EARN_FROM_BB_EVENT_BONUS(iVar0);
      }
    }
  }
}