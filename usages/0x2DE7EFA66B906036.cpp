// appchecklist.ysc @ L468
void func_15()
{
  if (Global_19464 == 0)
  {
    if (func_9(2, Global_19455, 0))
    {
      func_12();
      Global_19464 = 1;
      GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
      iLocal_30 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
      while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_30))
      {
        SYSTEM::WAIT(0);
      }
      iLocal_29 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_30);
      if (Global_19486.f_1 > 3)
      {
        Global_19486.f_1 = 8;
        if (iLocal_29 == 0)
        {
          iLocal_25 = 1;
          func_16();
        }
        else
        {
          iLocal_25 = 2;
          func_4();
        }
      }
    }
  }
}