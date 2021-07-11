// agency_heist3a.c @ L112287
void func_560(var uParam0)
{
  int iVar0;
  
  if (!uParam0->f_80)
  {
    if (PHYSICS::DOES_ROPE_EXIST(&(uParam0->f_5)))
    {
      iVar0 = 0;
      while (iVar0 < uParam0->f_91)
      {
        if (iVar0 != 0)
        {
          PHYSICS::UNPIN_ROPE_VERTEX(uParam0->f_5, iVar0);
        }
        iVar0++;
      }
    }
  }
}