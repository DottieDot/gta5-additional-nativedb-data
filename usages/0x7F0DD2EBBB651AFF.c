// exile3.c @ L10164
void func_107(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
    {
      if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
      {
        FIRE::STOP_ENTITY_FIRE(iParam0);
        ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_HEALTH(iParam0) + 200, 0);
        VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) + 200f));
        VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) + 200f));
        FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 5f);
        MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2.5f, 1, 0, 0, false);
      }
    }
  }
}