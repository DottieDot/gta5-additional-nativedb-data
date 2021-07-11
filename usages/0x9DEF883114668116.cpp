// freemode.ysc @ L16209
void func_59(var uParam0, int iParam1)
{
  int iVar0;
  
  *iParam1 = 1;
  iVar0 = 0;
  while (iVar0 <= 14)
  {
    if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST((*uParam0)[iVar0]))
    {
      VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR((*uParam0)[iVar0]);
    }
    if (!VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST((*uParam0)[iVar0]))
    {
      if (!func_43(uParam0->f_16[iVar0 /*3*/]))
      {
        if (iVar0 >= 5 && iVar0 <= 7)
        {
          (*uParam0)[iVar0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(uParam0->f_16[iVar0 /*3*/], uParam0->f_62[iVar0], 5f, 3f, uParam0->f_78[iVar0], -1, -1, -1, -1, 1, 0, 0, 1, 1, -1);
        }
        else
        {
          (*uParam0)[iVar0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(uParam0->f_16[iVar0 /*3*/], uParam0->f_62[iVar0], 5f, 3f, uParam0->f_78[iVar0], -1, -1, -1, -1, 0, 0, 0, 1, 1, -1);
        }
        VEHICLE::SET_SCRIPT_VEHICLE_GENERATOR((*uParam0)[iVar0], 1);
      }
    }
    iVar0++;
  }
}