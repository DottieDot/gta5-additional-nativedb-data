// am_contact_requests.ysc @ L58339
int func_912(int iParam0, int iParam1, char* sParam2)
{
  int iVar0;
  
  if (func_90())
  {
    func_78(-1693570755, iParam0, &iVar0, 0, 1, 0);
    StringCopy(&(Global_4263810[iVar0 /*84*/].f_13.f_26), sParam2, 32);
    Global_4263810[iVar0 /*84*/] = iParam1;
    return iVar0;
  }
  else
  {
    MONEY::_NETWORK_SPENT_CASINO_GENERIC(iParam0, 0, 1, sParam2, iParam1);
  }
  return -1;
}