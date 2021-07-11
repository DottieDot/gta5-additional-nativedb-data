// achievement_controller.c @ L12487
int func_87(int iParam0, var uParam1)
{
  int iVar0;
  int iVar1;
  
  iVar1 = FILES::GET_NUM_DLC_WEAPONS();
  iVar0 = 0;
  while (iVar0 < iVar1)
  {
    if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
    {
      if (uParam1->f_1 == iParam0)
      {
        return iVar0;
      }
    }
    iVar0++;
  }
  return -1;
}