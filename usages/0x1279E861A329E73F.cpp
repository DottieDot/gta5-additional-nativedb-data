// am_taxi.ysc @ L6155
void func_142()
{
  vector3 vVar0;
  
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_120, "SET_INPUT_EVENT");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  iLocal_114++;
  if (iLocal_114 > (iLocal_113 - 1))
  {
    iLocal_114 = 0;
  }
  if (HUD::DOES_BLIP_EXIST(vLocal_128[iLocal_114 /*3*/]))
  {
    vVar0 = { HUD::GET_BLIP_COORDS(vLocal_128[iLocal_114 /*3*/]) };
    if (!func_26(vVar0))
    {
      HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
    }
  }
}