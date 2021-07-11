// bailbond1.ysc @ L39881
int func_388(int iParam0)
{
  int iVar0;
  
  if (func_7(*iParam0))
  {
    if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
    {
      return 1;
    }
    iVar0 = PED::GET_JACK_TARGET(PLAYER::PLAYER_PED_ID());
    if (func_427(iVar0))
    {
      return 1;
    }
  }
  return 0;
}