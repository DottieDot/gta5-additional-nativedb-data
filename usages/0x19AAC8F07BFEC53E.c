// am_contact_requests.c @ L49706
int func_675(int iParam0)
{
  if (STREAMING::IS_MODEL_A_VEHICLE(func_310(iParam0)))
  {
    func_619(iParam0);
    if (func_618(func_310(iParam0)))
    {
      if (func_676(iParam0))
      {
        return 1;
      }
    }
    else
    {
      func_585(iParam0, -1);
    }
  }
  return 0;
}