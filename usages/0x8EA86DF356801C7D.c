// am_casino_peds.c @ L269123
void func_3095(int iParam0)
{
  if (func_15(iParam0))
  {
    if (func_1292(ENTITY::GET_ENTITY_MODEL(iParam0), 1))
    {
      VEHICLE::_SET_HYDRAULIC_WHEEL_STATE(iParam0, 4);
    }
  }
}