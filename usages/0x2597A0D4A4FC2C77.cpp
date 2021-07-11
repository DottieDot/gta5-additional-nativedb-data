// fm_mission_controller.ysc @ L177232
void func_2099(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  if (iParam0 > 0)
  {
    if (func_1913())
    {
      switch (iParam1)
      {
        case 0:
          iVar1 = 1934825517;
          break;
        
        case 1:
          iVar1 = 1852024236;
          break;
        
        case 2:
          iVar1 = 2099238988;
          break;
      }
      func_1902(iVar1, iParam0, &iVar0, 0, 1, 0);
      MemCopy(&(Global_4263810[iVar0 /*84*/].f_13.f_26), {Global_4456448.f_154647}, 8);
    }
    else
    {
      MONEY::_NETWORK_EARN_FROM_GANGOPS_ELITE(iParam0, &(Global_4456448.f_154647), iParam1);
    }
  }
}