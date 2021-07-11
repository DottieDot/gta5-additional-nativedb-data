// armenian3.ysc @ L122146
void func_788(int iParam0)
{
  int iVar0;
  
  iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
  while (MISC::GET_GAME_TIMER() <= iVar0)
  {
    SYSTEM::WAIT(0);
    RECORDING::_0x208784099002BC30("M_Complications", 0);
    func_833();
  }
}