// fm_mission_controller.c @ L604248
void func_9604(int iParam0, int iParam1)
{
  if (!MISC::IS_BIT_SET(iLocal_3156, iParam1))
  {
    if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iParam0) || (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0))))
    {
      if (iLocal_4520 <= 15)
      {
        ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, true, 1);
        iLocal_4520++;
        MISC::SET_BIT(&iLocal_3156, iParam1);
        func_9605(iParam0, iParam1);
      }
    }
  }
  else
  {
    func_9605(iParam0, iParam1);
  }
}