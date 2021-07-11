// paparazzo2.ysc @ L58048
void func_639()
{
  if (!iLocal_307)
  {
    iLocal_456 = func_284();
    iLocal_457 = func_640(iLocal_456);
    if (iLocal_457 > 22 || iLocal_457 < 5)
    {
      MISC::CLEAR_WEATHER_TYPE_PERSIST();
      MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10f);
      iLocal_307 = 1;
    }
  }
}