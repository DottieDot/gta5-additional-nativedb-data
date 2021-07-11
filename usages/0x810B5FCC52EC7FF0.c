// apparcadebusinesshub.c @ L10201
void func_355()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (Global_1694982.f_4 == -1)
  {
    iVar0 = func_361(func_343(PLAYER::PLAYER_ID()));
    if (func_343(PLAYER::PLAYER_ID()))
    {
      iVar2 = func_359(PLAYER::PLAYER_ID());
      if (iVar2 == -1)
      {
        iVar2 = func_357(PLAYER::PLAYER_ID());
      }
      iVar1 = func_356(iVar2);
    }
    else
    {
      iVar2 = -1;
      iVar1 = -1;
    }
  }
  else
  {
    iVar0 = 1;
    iVar2 = Global_1694982.f_4;
    iVar1 = func_356(Global_1694982.f_4);
    Global_1694982.f_4 = -1;
  }
  STATS::_0x810B5FCC52EC7FF0(uLocal_200, iVar0, iVar1, iVar2);
}