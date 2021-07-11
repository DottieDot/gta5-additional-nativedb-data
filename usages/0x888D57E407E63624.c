// am_mp_shooting_range.c @ L115386
float func_788(float fParam0, int iParam1)
{
  var uVar0;
  
  if (iParam1 == 0)
  {
    GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
  }
  return (fParam0 / IntToFloat(iParam1));
}