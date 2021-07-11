// am_casino_peds.c @ L284514
void func_3369(vector3 vParam0, float fParam1, bool bParam2)
{
  if (bParam2)
  {
    MISC::CLEAR_AREA_OF_VEHICLES(vParam0, fParam1, 1, 0, 0, 0, false, 0);
  }
  else
  {
    MISC::CLEAR_AREA(vParam0, fParam1, 1, 0, 0, false);
  }
  GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, fParam1);
}