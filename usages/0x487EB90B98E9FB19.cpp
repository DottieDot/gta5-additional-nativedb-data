// am_mp_armory_truck.ysc @ L297297
void func_4221()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 8)
  {
    if (Local_1866[iVar0 /*5*/] != 0)
    {
      NETWORK::TEXTURE_DOWNLOAD_RELEASE(Local_1866[iVar0 /*5*/]);
    }
    iVar0++;
  }
  MISC::CLEAR_BIT(&(Local_1764.f_3), 7);
}