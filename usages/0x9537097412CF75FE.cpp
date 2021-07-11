// am_pi_menu.ysc @ L398343
int func_5067(int iParam0)
{
  int iVar0;
  
  if (iParam0 == 0)
  {
    return 0;
  }
  if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
  {
    return 0;
  }
  iVar0 = VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0);
  if ((((((((((((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || iVar0 == 2) || iVar0 == 12) || iVar0 == 18) || iVar0 == 19) || iVar0 == 11) || iVar0 == 20) || iVar0 == 10) || iVar0 == 17)
  {
    return 0;
  }
  return 1;
}