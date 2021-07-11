// fm_bj_race_controler.ysc @ L299871
int func_4026(int iParam0, int iParam1)
{
  if (iParam0 != 0)
  {
    return (WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * iParam1);
  }
  return 0;
}