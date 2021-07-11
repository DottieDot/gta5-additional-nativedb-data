// am_pi_menu.c @ L410435
void func_5237()
{
  struct<2> Var0;
  
  if (func_1596(Global_2097152[func_207() /*10828*/].f_6168.f_4015[Global_2509253.f_6343 /*3*/]))
  {
    StringCopy(&Var0, "AMDO_OBJ_", 16);
    StringIntConCat(&Var0, Global_2097152[func_207() /*10828*/].f_6168.f_4015[Global_2509253.f_6343 /*3*/], 16);
    StringConCat(&Var0, "H", 16);
    if (MISC::SHOULD_USE_METRIC_MEASUREMENTS() && func_1597(Global_2097152[func_207() /*10828*/].f_6168.f_4015[Global_2509253.f_6343 /*3*/]))
    {
      StringConCat(&Var0, "M", 16);
    }
    func_1046(&Var0, 0, 0);
  }
}