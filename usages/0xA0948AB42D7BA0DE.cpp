// act_cinema.ysc @ L105961
float func_736()
{
  if (func_954())
  {
    if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("RHINO"))
    {
      return 640f;
    }
    else
    {
      return 320f;
    }
  }
  return 160f;
}