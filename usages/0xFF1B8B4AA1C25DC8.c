// agency_heist3b.c @ L138661
void func_986(var uParam0, char* sParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < uParam0->f_374)
  {
    if (uParam0->f_374[iVar0 /*5*/])
    {
      if (MISC::ARE_STRINGS_EQUAL(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
      {
        if (uParam0->f_374[iVar0 /*5*/].f_1)
        {
          TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
          func_46(&(uParam0->f_374[iVar0 /*5*/]));
          return;
        }
        else
        {
          uParam0->f_374[iVar0 /*5*/].f_2 = 1;
          uParam0->f_982 = 1;
          return;
        }
      }
    }
    iVar0++;
  }
}