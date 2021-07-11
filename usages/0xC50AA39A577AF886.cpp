// apparcadebusiness.ysc @ L14144
void func_333()
{
  if (func_334())
  {
    if (!MISC::IS_BIT_SET(iLocal_203, 3))
    {
      GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_384, "GET_CURRENT_SELECTION");
      iLocal_385 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
      MISC::SET_BIT(&iLocal_203, 3);
    }
  }
}