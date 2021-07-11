// am_mp_arcade_claw_crane.c @ L83716
void func_477(int iParam0, var uParam1, var uParam2)
{
  if (iParam0->f_12 > 0f)
  {
    if (iParam0->f_10 < iParam0->f_16)
    {
      PAD::SET_PAD_SHAKE(2, 200, ((15 + SYSTEM::ROUND((iParam0->f_12 * 45f))) + SYSTEM::ROUND((iParam0->f_13 * 45f))));
    }
    else if (iParam0->f_10 > iParam0->f_17)
    {
      iParam0->f_19 = (iParam0->f_19 + ((0.35f + (iParam0->f_12 * 0.2f)) * SYSTEM::TIMESTEP()));
      PAD::SET_PAD_SHAKE(2, 200, 200);
    }
    else
    {
      iParam0->f_20 = (0.025f * iParam0->f_12);
      iParam0->f_14 = (iParam0->f_14 + ((iParam0->f_20 * iParam0->f_38) * SYSTEM::TIMESTEP()));
      if (iParam0->f_14 > 1f)
      {
        iParam0->f_14 = 1f;
      }
      MISC::SET_BIT(iParam0, 0);
      PAD::SET_PAD_SHAKE(2, 200, ((30 + SYSTEM::ROUND((iParam0->f_12 * 60f))) + SYSTEM::ROUND((iParam0->f_13 * 60f))));
    }
  }
  else if (iParam0->f_10 > iParam0->f_17)
  {
    PAD::SET_PAD_SHAKE(2, 200, 30);
  }
}