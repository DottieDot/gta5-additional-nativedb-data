// fbi5a.ysc @ L108022
void func_518(var uParam0, var uParam1, var uParam2, bool bParam3)
{
  int iVar0;
  vector3 vVar1;
  int iVar2;
  
  if (!*uParam2)
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
    {
      iVar0 = 0;
      while (iVar0 < 4)
      {
        vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, func_517(iVar0)) };
        if (bParam3)
        {
          iVar2 = 0;
        }
        else
        {
          iVar2 = 0;
        }
        (*uParam1)[iVar0] = PHYSICS::ADD_ROPE(vVar1, 0f, 0f, 0f, 6f, iVar2, -1f, 0.5f, 0.5f, 0, 0, 1, 1f, 0, 0);
        iVar0++;
      }
      *uParam2 = 1;
    }
  }
}