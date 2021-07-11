// event_controller.c @ L257
void func_3(int iParam0)
{
  struct<39> Var0;
  int iVar1;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
  {
    iVar1 = NETWORK::_0x742B58F723233ED9(Var0.f_38);
    if (iVar1 >= 0 && iVar1 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
    {
      if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(iVar1) || NETWORK::_0x8806CEBFABD3CE05(iVar1))
      {
        if (NETWORK::_0x8806CEBFABD3CE05(iVar1))
        {
          func_55(iVar1);
        }
        else
        {
          NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar1);
        }
        func_54(Var0.f_37, -1);
      }
      else if (func_47())
      {
        func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
      }
    }
  }
}