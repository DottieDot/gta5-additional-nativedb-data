// am_casino_peds.ysc @ L148856
void func_1347(int iParam0)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
    {
      iVar0 = 0;
      while (iVar0 <= 5)
      {
        if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iParam0, iVar0) > 0f)
        {
          VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0, 0);
          return;
        }
        iVar0++;
      }
    }
  }
}