// fm_mission_controller.c @ L835902
int func_13494()
{
  int iVar0;
  
  MISC::DISABLE_STUNT_JUMP_SET(0);
  MISC::DISABLE_STUNT_JUMP_SET(1);
  iVar0 = 0;
  while (iVar0 <= (Global_4456448.f_153499 - 1))
  {
    if (!func_399(Global_4456448.f_153500[iVar0 /*9*/]))
    {
      if (!func_399(Global_4456448.f_153500[iVar0 /*9*/].f_3))
      {
        if (!func_399(Global_4456448.f_153500[iVar0 /*9*/].f_6))
        {
          if (!MISC::IS_BIT_SET(iLocal_1824, iVar0))
          {
            uLocal_1823[iVar0] = MISC::ADD_STUNT_JUMP(func_13496(Global_4456448.f_153500[iVar0 /*9*/], 0), func_13496(Global_4456448.f_153500[iVar0 /*9*/], 1), func_13495(Global_4456448.f_153500[iVar0 /*9*/].f_3, 0), func_13495(Global_4456448.f_153500[iVar0 /*9*/].f_3, 1), Global_4456448.f_153500[iVar0 /*9*/].f_6, 1000, 2, 0);
            MISC::SET_BIT(&iLocal_1824, iVar0);
          }
        }
      }
    }
    iVar0++;
  }
  MISC::ENABLE_STUNT_JUMP_SET(2);
  return 1;
}