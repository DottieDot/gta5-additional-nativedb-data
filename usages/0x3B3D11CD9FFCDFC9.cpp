// fm_hideout_controler.ysc @ L149362
void func_1585(struct<2> Param0)
{
  if (Param0.f_1)
  {
    if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Param0)) >= 1000)
    {
      NETWORK::NETWORK_SET_MISSION_FINISHED();
    }
  }
  SCRIPT::TERMINATE_THIS_THREAD();
}