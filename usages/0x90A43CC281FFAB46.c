// am_casino_peds.c @ L342015
void func_4441(var uParam0, int iParam1)
{
  if (func_4429(uParam0, iParam1))
  {
    switch (iParam1)
    {
      case 0:
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 0, "anim@move_f@waitress", "idle", 1090519040, 1);
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 1, "anim@move_f@waitress", "walk", 1090519040, 1);
        break;
      
      case 1:
      case 2:
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 0, "anim@move_m@security_guard", "idle", 1090519040, 1);
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 1, "anim@move_m@security_guard", "walk", 1090519040, 1);
        break;
      
      case 3:
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 0, "random@security_van", "sec_idle", 1090519040, 1);
        PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uParam0->f_45[iParam1], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
        break;
      }
  }
}