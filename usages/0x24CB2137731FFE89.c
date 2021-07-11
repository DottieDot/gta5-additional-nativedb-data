// am_casino_limo.c @ L52694
void func_581()
{
  if (!func_582())
  {
    return;
  }
  if (func_612(3))
  {
    switch (VEHICLE::_0xCA4AC3EAAE46EC7B(func_7(), 1))
    {
      case 3:
        if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7()) > 1)
        {
          VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(func_7(), 1, 1);
        }
        break;
      
      case 1:
        if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7()) < 2)
        {
          VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(func_7(), 1, 3);
        }
        break;
      }
  }
}