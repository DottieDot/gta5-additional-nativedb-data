// am_mp_smpl_interior_ext.ysc @ L277366
int func_4167()
{
  struct<4> Var0;
  
  if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_SMPL_INTERIOR_INT"))
  {
    if (Local_199.f_5.f_3 || (func_3539(Local_199.f_1, Local_218.f_3) && !func_535()))
    {
      Var0 = Local_199.f_1;
      Var0.f_1 = Local_218.f_3;
      Var0.f_3 = func_4169();
      if (!Local_199.f_5.f_3)
      {
        Var0.f_2 = func_4168();
      }
      else
      {
        Var0.f_2 = -1;
      }
      if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", Var0.f_2, 1, 0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(2512) > 0)
      {
        SYSTEM::START_NEW_SCRIPT_WITH_ARGS("AM_MP_SMPL_INTERIOR_INT", &Var0, 4, 2512);
        SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_SMPL_INTERIOR_INT");
      }
      return 1;
    }
  }
  return 0;
}