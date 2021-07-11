// gb_biker_wheelie_rider.ysc @ L16245
int func_506()
{
  int iVar0;
  
  iVar0 = SYSTEM::ROUND((STATS::_0xA943FD1722E11EFD() * 10f));
  if ((iLocal_292 > 0 && iVar0 == 0) && !func_8(&uLocal_289, 2000, 0))
  {
    iVar0 = iLocal_292;
    func_659(6);
  }
  else
  {
    iLocal_292 = iVar0;
    func_46(&uLocal_289);
    func_507(6);
  }
  return iVar0;
}