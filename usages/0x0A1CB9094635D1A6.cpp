// am_casino_limo.ysc @ L15812
int func_310()
{
  if (!func_612(8))
  {
    if (func_365() && func_364())
    {
      func_354(&Local_877, func_363(), func_362(), func_361(), func_360(), func_359(), func_358(), func_357(), func_356(), func_355(), 0, 2);
      func_352(&Local_877, func_353());
      MISC::CLEAR_AREA_OF_PROJECTILES(func_361(), 25f, 0);
      func_134(8);
    }
  }
  else
  {
    if (Local_877.f_386)
    {
      func_313(&Local_877, 0, 1);
    }
    if (!Local_877.f_386)
    {
      func_312();
      func_311(&Local_926);
      return 1;
    }
  }
  return 0;
}