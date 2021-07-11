// appmpjoblistnew.ysc @ L33405
void func_297()
{
  if (func_305())
  {
    NETWORK::UGC_CLEAR_OFFLINE_QUERY();
  }
  else
  {
    NETWORK::UGC_CLEAR_QUERY_RESULTS();
  }
}