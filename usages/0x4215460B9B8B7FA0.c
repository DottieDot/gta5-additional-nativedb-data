// fmmc_launcher.c @ L453676
void func_6625(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
  uParam2->f_666[*uParam3] = iParam1;
  if (iParam0 == iParam1)
  {
    uParam2->f_662 = func_6323(WEAPON::GET_WEAPONTYPE_SLOT(iParam1));
    uParam2->f_663 = 0;
    uParam2->f_664 = *uParam3;
    uParam2->f_665 = WEAPON::GET_WEAPONTYPE_GROUP(iParam0);
    *uParam5 = 1;
    if (!func_103(85))
    {
      func_6321(uParam2);
      func_3941(85);
    }
  }
  else if (!*uParam5)
  {
    if (WEAPON::GET_WEAPONTYPE_GROUP(iParam0) == WEAPON::GET_WEAPONTYPE_GROUP(iParam1))
    {
      uParam2->f_664 = *uParam3 + 1;
    }
  }
  *uParam3++;
  if (*iParam6 == *uParam4 + 1)
  {
    *uParam4 = *iParam6;
  }
}