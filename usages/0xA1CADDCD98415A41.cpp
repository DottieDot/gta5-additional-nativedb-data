// agency_heist3b.ysc @ L4884
void func_45(var uParam0, char* sParam1, bool bParam2)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < uParam0->f_930)
  {
    if (uParam0->f_930[iVar0 /*5*/])
    {
      if (MISC::ARE_STRINGS_EQUAL(uParam0->f_930[iVar0 /*5*/].f_4, sParam1))
      {
        if (uParam0->f_930[iVar0 /*5*/].f_1)
        {
          AUDIO::STOP_ALARM(sParam1, bParam2);
          func_46(&(uParam0->f_930[iVar0 /*5*/]));
          return;
        }
        else
        {
          uParam0->f_930[iVar0 /*5*/].f_2 = 1;
          uParam0->f_982 = 1;
          return;
        }
      }
    }
    iVar0++;
  }
}