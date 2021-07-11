// am_mp_arena_box.ysc @ L87999
void func_571(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_570(iParam0);
  if (!func_388())
  {
    func_573(iVar0);
    MONEY::_NETWORK_EARN_FROM_ARENA_CAREER_PROGRESSION(iVar0, iParam0);
  }
  else
  {
    func_376(func_572(iParam0), iVar0, &iVar1, 0, 0, 0);
    Global_4263810[iVar1 /*84*/].f_65.f_15 = iParam0;
  }
}