// armenian1.ysc @ L56684
void func_533(bool bParam0)
{
  int iVar0;
  float fVar1;
  
  iVar0 = 0;
  fVar1 = 15f;
  iVar0 = 0;
  while (iVar0 < iLocal_440)
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_440[iVar0], 0) && (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_440[iVar0], -1, 0) || !bParam0))
    {
      if ((((((iVar0 == 1 || iVar0 == 4) || iVar0 == 7) || iVar0 == 9) || iVar0 == 10) || iVar0 == 14) || iVar0 == 18)
      {
        fVar1 = 17.5f;
      }
      else if (((((((iVar0 == 6 || iVar0 == 8) || iVar0 == 11) || iVar0 == 12) || iVar0 == 13) || iVar0 == 15) || iVar0 == 16) || iVar0 == 19)
      {
        fVar1 = 20f;
      }
      VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_440[iVar0], fVar1);
    }
    iVar0++;
  }
}