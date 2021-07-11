// agency_heist3b.c @ L4827
void func_43(bool bParam0)
{
  int iVar0;
  
  if (bParam0)
  {
    iLocal_1417[0] = TASK::ADD_COVER_POINT(119.9658f, -740.4022f, 249.152f, 161.4701f, 0, 2, 1, 1);
    iLocal_1417[1] = TASK::ADD_COVER_POINT(135.5736f, -742.7592f, 249.152f, 72.4091f, 1, 2, 1, 1);
    iLocal_1417[2] = TASK::ADD_COVER_POINT(122.1301f, -740.8215f, 253.1523f, 254.1523f, 0, 0, 1, 1);
  }
  else
  {
    iVar0 = 0;
    while (iVar0 < iLocal_1417)
    {
      if (iLocal_1417[iVar0] != 0)
      {
        TASK::REMOVE_COVER_POINT(iLocal_1417[iVar0]);
        iLocal_1417[iVar0] = 0;
      }
      iVar0++;
    }
  }
}