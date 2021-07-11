// fm_race_creator.c @ L392889
void func_5792(int iParam0)
{
  struct<2> Var0;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
  {
    if (func_40(Var0.f_1, 0, 1))
    {
      Global_2449755.f_3835[Var0.f_1] = VEHICLE::DOES_VEHICLE_EXIST_WITH_DECORATOR("BeforeCorona");
      if (ENTITY::DOES_ENTITY_EXIST(Global_2449755.f_3835[Var0.f_1]))
      {
        if (func_5794(Var0.f_1, Global_2449755.f_3835[Var0.f_1]))
        {
          func_5793(Var0.f_1, 1);
        }
        else
        {
          func_5793(Var0.f_1, 2);
        }
      }
      else
      {
        func_5793(Var0.f_1, 2);
      }
    }
    else
    {
      func_5793(Var0.f_1, 2);
    }
    MISC::SET_BIT(&(Global_2449755.f_3868), Var0.f_1);
  }
}