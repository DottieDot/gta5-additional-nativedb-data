// ingamehud.ysc @ L120973
int func_1071(var uParam0)
{
  bool bVar0;
  
  if (func_1072())
  {
    return 0;
  }
  if (DLC::HAS_CLOUD_REQUESTS_FINISHED(&bVar0, 0))
  {
    *uParam0 = 0;
    return 1;
  }
  if (bVar0)
  {
    *uParam0 = 1;
    return 1;
  }
  return 0;
}