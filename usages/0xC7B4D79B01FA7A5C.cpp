// am_cp_collection.ysc @ L13182
void func_304()
{
  if (Local_150 != -1 && Local_150.f_1 != -1)
  {
    if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_306() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
    {
      func_305(Local_150.f_1, Local_150, func_258(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
      Local_150 = -1;
      Local_150.f_1 = -1;
    }
  }
}