// grid_arcade_cabinet.ysc @ L1443
void func_43()
{
  if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_220))
  {
    return;
  }
  if (Local_220.f_19 == 0)
  {
    return;
  }
  Local_220.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_220.f_19);
  STATS::_PLAYSTATS_ARCADEGAME(MISC::GET_HASH_KEY(&Local_220), Local_220.f_16, Local_220.f_17, Local_220.f_18, Local_220.f_19, Local_220.f_20);
}