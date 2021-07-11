// respawn_controller.c @ L9398
int func_182()
{
  int iVar0;
  int iVar1;
  
  iVar0 = PLAYER::GET_TIME_SINCE_LAST_DEATH();
  iVar1 = PLAYER::GET_TIME_SINCE_LAST_ARREST();
  if (iVar1 != -1)
  {
    if (iVar0 == -1 || iVar1 < iVar0)
    {
      return 1;
    }
  }
  return 0;
}