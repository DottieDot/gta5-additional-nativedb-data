// abigail1.c @ L38976
void func_308(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    if (func_310(0))
    {
      Global_19664 = 1;
      if (bParam1)
      {
        MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
      }
      Global_19414 = { Global_19432[Global_19431 /*3*/] };
      MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
    }
  }
  else if (Global_19664 == 1)
  {
    Global_19664 = 0;
    Global_19414 = { Global_19439[Global_19431 /*3*/] };
    if (bParam1)
    {
      MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
    }
    else
    {
      MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
    }
  }
}