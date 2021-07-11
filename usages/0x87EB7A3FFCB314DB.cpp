// appcontacts.ysc @ L9945
int func_179(var uParam0, int iParam1)
{
  int iVar0;
  
  if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
  {
    *iParam1 = 2;
  }
  else if (uParam0->f_2936 < uParam0->f_33)
  {
    if (func_175((*uParam0)[uParam0->f_2936], 0, 1))
    {
      return 1;
    }
    else
    {
      *iParam1 = 2;
    }
  }
  else
  {
    iVar0 = func_169(uParam0->f_2936, uParam0);
    if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(uParam0->f_34[iVar0 /*29*/])))
    {
      return 1;
    }
    else
    {
      *iParam1 = 0;
    }
  }
  return 0;
}