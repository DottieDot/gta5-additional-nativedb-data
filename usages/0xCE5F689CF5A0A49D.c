// am_mp_property_int.c @ L328394
void func_3869()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_3821(Global_2449755.f_1.f_2828.f_13, &iVar0, &iVar1, &iVar2, &iVar3);
  if ((iVar3 > 0 && Global_3934112 > 0) && iVar3 != Global_3934112)
  {
    if (func_3874(Global_2449755.f_1.f_2828) && NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2449755.f_1.f_2828)) == PLAYER::PLAYER_ID())
    {
      if (func_7267(iLocal_522))
      {
        func_3871(iVar0, iVar1, iVar2, Global_2449755.f_1.f_2828, iLocal_525);
      }
      else
      {
        func_3871(iVar0, iVar1, iVar2, Global_2449755.f_1.f_2828, Global_3934112);
      }
      iLocal_497 = Global_3934112;
    }
  }
}