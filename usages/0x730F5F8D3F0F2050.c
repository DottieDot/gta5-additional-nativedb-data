// gb_casino_heist.c @ L22273
void func_384(int iParam0, int iParam1)
{
  switch (iParam0)
  {
    case 0:
      ENTITY::SET_ENTITY_RENDER_SCORCHED(iParam1, 1);
      func_385(iParam1);
      VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, 1);
      break;
    
    case 1:
      VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 2);
      break;
  }
}