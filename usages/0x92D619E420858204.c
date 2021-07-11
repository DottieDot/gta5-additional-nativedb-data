// abigail2.c @ L45502
void func_453(var uParam0)
{
  switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
  {
    case joaat("STARLING"):
      if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
      {
        VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
      }
      else
      {
        VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
      }
      break;
  }
}