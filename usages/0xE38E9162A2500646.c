// abigail2.c @ L35158
int func_247(int iParam0, int iParam1)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
    {
      switch (iParam1)
      {
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
          return 1;
          break;
        
        default:
          if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
          {
            return 1;
          }
          break;
        }
      }
  }
  return 0;
}