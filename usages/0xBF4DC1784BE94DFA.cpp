// fm_mission_controller.ysc @ L668903
void func_10855()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 <= 31)
  {
    iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar0));
    if (func_382(iVar1))
    {
      AUDIO::_0xBF4DC1784BE94DFA(iVar1, 0, 0);
    }
    iVar0++;
  }
}