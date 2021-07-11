// exile1.ysc @ L18484
void func_291()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < vLocal_62.x)
  {
    if (iVar0 != 0)
    {
      if (ENTITY::DOES_ENTITY_EXIST(vLocal_62[iVar0 /*3*/]))
      {
        VEHICLE::DELETE_VEHICLE(&(vLocal_62[iVar0 /*3*/]));
      }
    }
    iVar0++;
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], 0))
  {
    VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_166[2], 2, 1);
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(vLocal_62[0 /*3*/], 0))
  {
    VEHICLE::SET_VEHICLE_ENGINE_ON(vLocal_62[0 /*3*/], true, true, 0);
  }
}