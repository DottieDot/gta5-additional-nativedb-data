// freemode.ysc @ L494288
void func_6772(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iParam0))
    {
      iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0) && (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) || iParam1))
      {
        if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
        {
          iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
          if (func_6362(iVar1))
          {
            VEHICLE::DETACH_VEHICLE_FROM_CARGOBOB(iVar1, iParam0);
          }
          else
          {
            VEHICLE::DETACH_VEHICLE_FROM_TRAILER(iVar1);
          }
        }
      }
    }
  }
}