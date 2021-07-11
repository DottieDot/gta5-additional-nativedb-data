// fm_mission_controller.c @ L766198
int func_12581(int iParam0, int iParam1)
{
  if (func_12513(iParam1, 1))
  {
    return 0;
  }
  if ((PED::IS_PED_IN_COMBAT(iParam0, 0) || PED::IS_PED_FLEEING(iParam0)) || (PED::GET_PED_ALERTNESS(iParam0) != 0 && PED::GET_PED_ALERTNESS(iParam0) != -1))
  {
    switch (func_12151(iParam1))
    {
      case 0:
      case 2:
        return 1;
      
      case 1:
        if (func_12173(iParam1, 0))
        {
          return 1;
        }
        break;
      }
  }
  return 0;
}