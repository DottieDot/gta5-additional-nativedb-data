// am_hold_up.ysc @ L1648
int func_35()
{
  if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
  {
    if (FIRE::IS_EXPLOSION_IN_SPHERE(9, vLocal_145, 40f))
    {
      return 1;
    }
  }
  if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, vLocal_145, vLocal_146, fLocal_147))
  {
    return 1;
  }
  if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, vLocal_148, vLocal_149, fLocal_150))
  {
    return 1;
  }
  return 0;
}