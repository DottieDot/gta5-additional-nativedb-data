// abigail2.ysc @ L37866
void func_327()
{
  int iVar0;
  
  if (NETWORK::NETWORK_IS_SIGNED_IN())
  {
    STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
    if (!Global_58645[0] == iVar0)
    {
      Global_58645[0] = iVar0;
    }
    STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
    if (!Global_58645[1] == iVar0)
    {
      Global_58645[1] = iVar0;
    }
    STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
    if (!Global_58645[2] == iVar0)
    {
      Global_58645[2] = iVar0;
    }
  }
}