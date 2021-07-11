// fm_maintain_transition_players.c @ L4144
void func_141(int iParam0)
{
  if (iLocal_358 == 1)
  {
    func_11(0);
    if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_8(), -1, 1, 0))
    {
      if (func_280())
      {
        BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
        BRAIN::DISABLE_SCRIPT_BRAIN_SET(4);
        BRAIN::ENABLE_SCRIPT_BRAIN_SET(2);
        BRAIN::ENABLE_SCRIPT_BRAIN_SET(8);
        func_143(0);
        iLocal_358 = 0;
      }
    }
  }
  else if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_142()) && func_13())
  {
    func_11(0);
    func_6(iParam0->f_3);
    iLocal_358 = 1;
  }
}