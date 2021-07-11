// act_cinema.c @ L118354
void func_1073(int iParam0)
{
  int iVar0;
  
  iVar0 = Global_2405071.f_2680;
  if ((AUDIO::_0x2DD39BF3E2F9C47F() && Global_2405071.f_2678 == 0) && iParam0 == 0)
  {
    iVar0 = 255;
  }
  if (!iVar0 == Global_2405071.f_2677)
  {
    if (!AUDIO::IS_RADIO_RETUNING())
    {
      Global_2405071.f_2677 = iVar0;
    }
  }
}