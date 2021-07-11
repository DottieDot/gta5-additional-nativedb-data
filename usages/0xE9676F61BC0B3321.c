// freemode.c @ L614104
int func_8143()
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_2449755.f_2846.f_145))
  {
    if (!ENTITY::IS_ENTITY_DEAD(Global_2449755.f_2846.f_145, 0))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2449755.f_2846.f_145))
      {
        if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_2449755.f_2846.f_145))
        {
          ENTITY::FREEZE_ENTITY_POSITION(Global_2449755.f_2846.f_145, false);
          VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_2449755.f_2846.f_145, 1084227584);
          PHYSICS::ACTIVATE_PHYSICS(Global_2449755.f_2846.f_145);
          ENTITY::SET_ENTITY_DYNAMIC(Global_2449755.f_2846.f_145, 1);
          return 1;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}