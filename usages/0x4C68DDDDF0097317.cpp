// am_prostitute.ysc @ L298
int func_4()
{
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pb_prostitute")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1, 0))
  {
    return 1;
  }
  if (iLocal_57 == 0)
  {
    return 1;
  }
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_5();
  }
  else
  {
    PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
  }
  return 0;
}