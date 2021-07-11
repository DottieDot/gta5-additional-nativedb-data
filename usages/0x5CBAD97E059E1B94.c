// am_mp_arena_box.c @ L112531
int func_1162(int iParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = 0;
  switch (iParam0)
  {
    case 0:
      iVar0 = Global_262145.f_25782;
      break;
    
    case 1:
      iVar0 = Global_262145.f_25783;
      break;
    
    case 2:
      iVar0 = Global_262145.f_25784;
      break;
    
    case 3:
      iVar0 = Global_262145.f_25785;
      break;
  }
  if (bParam1)
  {
    if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1, 0))
    {
      iVar0 = MONEY::NETWORK_GET_VC_BALANCE();
    }
  }
  return iVar0;
}