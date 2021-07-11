// abigail1.c @ L38581
void func_288(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
    {
      if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
      {
        VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
      }
      if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
      {
        VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
      }
      if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
      {
        VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
      }
    }
  }
}