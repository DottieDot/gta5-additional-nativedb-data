// atm_trigger.c @ L2949
bool func_28(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = iLocal_607;
  iVar1 = MISC::GET_GAME_TIMER() + 1000;
  while (!MONEY::_0xE154B48B68EF72BC(iVar0) && !func_64(iParam0, 1))
  {
    func_40();
  }
  while (iVar1 > MISC::GET_GAME_TIMER() && !func_64(iParam0, 1))
  {
    func_40();
  }
  return MONEY::_0x6FCF8DDEA146C45B(iVar0);
}