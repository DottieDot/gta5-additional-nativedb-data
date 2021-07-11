// am_crate_drop.c @ L349
void func_4(int iParam0)
{
  if (Local_103.f_2.f_1[iParam0 /*66*/].f_59 != 0)
  {
    if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_103.f_2.f_1[iParam0 /*66*/].f_59))
    {
      GRAPHICS::REMOVE_PARTICLE_FX(Local_103.f_2.f_1[iParam0 /*66*/].f_59, 0);
      Local_103.f_2.f_1[iParam0 /*66*/].f_59 = 0;
    }
  }
}