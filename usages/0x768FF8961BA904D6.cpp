// appbunkerbusiness.ysc @ L19006
void func_450()
{
  bool bVar0;
  struct<4> Var1;
  char* sVar2;
  
  if (MISC::IS_BIT_SET(iLocal_197, 11))
  {
    if (!MISC::IS_BIT_SET(iLocal_197, 12))
    {
      GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_390, "APP_IS_DEACTIVATED");
      iLocal_393 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
      MISC::SET_BIT(&iLocal_197, 12);
    }
    else if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_393))
    {
      bVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(iLocal_393);
      if (bVar0)
      {
        MISC::SET_BIT(&iLocal_197, 11);
      }
      else
      {
        MISC::CLEAR_BIT(&iLocal_197, 11);
        Var1 = { func_413(iLocal_215, 0) };
        MemCopy(&sVar2, {func_414(iLocal_215, 0)}, 4);
        func_447(1);
        func_239(&Var1, "WHOUSE_CONF", "", 0, 0, -1, 0, &sVar2, "UA_FT_TITLE");
      }
      MISC::CLEAR_BIT(&iLocal_197, 12);
    }
  }
}