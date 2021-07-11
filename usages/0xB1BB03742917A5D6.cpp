// fm_capture_creator.ysc @ L268835
void func_2714(var uParam0, vector3 vParam1)
{
  vector3 vVar0;
  
  switch (*uParam0)
  {
    case 0:
      GRAPHICS::GOLF_TRAIL_SET_ENABLED(1);
      GRAPHICS::GOLF_TRAIL_SET_TESSELLATION(3, 1);
      GRAPHICS::_0xC0416B061F2B7E5E(1);
      GRAPHICS::GOLF_TRAIL_SET_FACING(1);
      *uParam0 = 1;
      break;
    
    case 1:
      vVar0 = { vParam1.x, vParam1.y, (vParam1.z - 10f) };
      GRAPHICS::GOLF_TRAIL_SET_FIXED_CONTROL_POINT(0, vParam1, 0.2f, 255, 255, 0, 255);
      GRAPHICS::GOLF_TRAIL_SET_FIXED_CONTROL_POINT(1, vVar0, 0.2f, 255, 255, 0, 255);
      GRAPHICS::GOLF_TRAIL_SET_FIXED_CONTROL_POINT(2, vParam1.x, vParam1.y, -300f, 0.2f, 255, 255, 0, 255);
      break;
  }
}