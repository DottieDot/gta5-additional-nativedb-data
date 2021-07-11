// nigel2.ysc @ L41116
void func_395()
{
  if (!iLocal_304)
  {
    if (fLocal_341 > 124136f)
    {
      if (func_22(Local_534))
      {
        if (ENTITY::GET_ENTITY_HEALTH(Local_534) < 200)
        {
          ENTITY::SET_ENTITY_HEALTH(Local_534, 200, 0);
        }
      }
      if (func_15(Local_536))
      {
        ENTITY::SET_ENTITY_HEALTH(Local_536, 1000, 0);
        if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_536, 4))
        {
          VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_536, 4, 1);
        }
        VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_536, true);
        VEHICLE::SMASH_VEHICLE_WINDOW(Local_536, 0);
        VEHICLE::SMASH_VEHICLE_WINDOW(Local_536, 1);
        VEHICLE::_DETACH_VEHICLE_WINDSCREEN(Local_536);
        VEHICLE::SET_VEHICLE_DAMAGE(Local_536, 0f, 1f, 0.1f, 800f, 1850f, 1);
        VEHICLE::SET_VEHICLE_DAMAGE(Local_536, -0.2f, 1f, 0.5f, 50f, 650f, 1);
        VEHICLE::SET_VEHICLE_DAMAGE(Local_536, -0.7f, -0.2f, 0.3f, 50f, 500f, 1);
        iLocal_304 = 1;
      }
    }
  }
}