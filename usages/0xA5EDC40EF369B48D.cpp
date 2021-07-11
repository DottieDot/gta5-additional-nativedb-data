// abigail1.ysc @ L38868
void func_302(bool bParam0)
{
  int iVar0;
  
  iVar0 = PLAYER::GET_PLAYER_INDEX();
  if (!PLAYER::IS_PLAYER_DEAD(iVar0))
  {
    if (bParam0)
    {
    }
    PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
    PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
  }
  func_214(1, 1, 0, 0, 0, 0);
}