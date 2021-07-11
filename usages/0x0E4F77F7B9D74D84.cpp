// fm_maintain_transition_players.ysc @ L1167
void func_22()
{
  int iVar0;
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  iVar0 = 0;
  while (iVar0 < Global_4456448.f_42)
  {
    iVar1 = (iVar1 + Global_4456448.f_49[iVar0]);
    if (Global_4456448.f_49[iVar0] == 0)
    {
      bVar2 = false;
    }
    iVar0++;
  }
  if (bVar2)
  {
    if (Global_4456448 == 0 && iVar1 > Global_4456448.f_37)
    {
      iVar1 = Global_4456448.f_37;
    }
    NETWORK::_0x0E4F77F7B9D74D84(iVar1);
  }
}