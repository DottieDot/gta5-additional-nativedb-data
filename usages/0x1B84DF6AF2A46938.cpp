// am_mp_ie_warehouse.ysc @ L34889
int func_513()
{
  int iVar0;
  
  if (func_515())
  {
    return NETWORK::PARTICIPANT_ID_TO_INT();
  }
  if (func_23(PLAYER::PLAYER_ID(), 0))
  {
    iVar0 = func_506();
    if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
    {
      if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
      {
        return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
      }
    }
  }
  return -1;
}