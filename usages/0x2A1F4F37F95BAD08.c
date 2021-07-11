// fmmc_launcher.c @ L477928
void func_6989(int iParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 49)
  {
    switch (iVar0)
    {
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
        VEHICLE::TOGGLE_VEHICLE_MOD(iParam0, iVar0, false);
        break;
      
      default:
        if (iVar0 != 48)
        {
          if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iVar0) > 0)
          {
            VEHICLE::REMOVE_VEHICLE_MOD(iParam0, iVar0);
          }
        }
        break;
    }
    iVar0++;
  }
}