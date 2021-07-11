// main_persistent.c @ L305162
void func_4350()
{
  int iVar0;
  
  if ((func_4365(Global_109986) != 4 || func_4364(Global_109986) < 40) || func_4364(Global_109986) > 50)
  {
    iVar0 = Global_109986;
    func_4355(&iVar0, 0, 2, 0, 0, 0, 0);
    CLOCK::SET_CLOCK_TIME(func_4365(iVar0), func_4364(iVar0), func_4354(iVar0));
    CLOCK::SET_CLOCK_DATE(func_4353(iVar0), func_4352(iVar0), func_4351(iVar0));
  }
}