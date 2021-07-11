// golf.ysc @ L130110
void func_1335(var uParam0)
{
  uParam0->f_124.f_11 = { 0.025f, 0.3f, 0.025f };
  uParam0->f_124.f_14 = { 255f, 255f, 255f };
  uParam0->f_124.f_17 = { 255f, 255f, 255f };
  uParam0->f_124.f_20 = { 255f, 255f, 255f };
  uParam0->f_124.f_23 = { 100f, 100f, 100f };
  uParam0->f_124.f_26 = 8;
  uParam0->f_124.f_27 = 10;
  uParam0->f_124.f_29 = 1f;
  uParam0->f_124.f_30 = 1f;
  uParam0->f_124.f_31 = 1f;
  uParam0->f_124.f_32 = 1f;
  uParam0->f_124.f_33 = 0.3f;
  GRAPHICS::GOLF_TRAIL_SET_RADIUS(uParam0->f_124.f_11, uParam0->f_124.f_11.f_1, uParam0->f_124.f_11.f_2);
  GRAPHICS::GOLF_TRAIL_SET_COLOUR(SYSTEM::FLOOR(uParam0->f_124.f_14), SYSTEM::FLOOR(uParam0->f_124.f_14.f_1), SYSTEM::FLOOR(uParam0->f_124.f_14.f_2), SYSTEM::FLOOR(uParam0->f_124.f_23), SYSTEM::FLOOR(uParam0->f_124.f_17), SYSTEM::FLOOR(uParam0->f_124.f_17.f_1), SYSTEM::FLOOR(uParam0->f_124.f_17.f_2), SYSTEM::FLOOR(uParam0->f_124.f_23.f_1), SYSTEM::FLOOR(uParam0->f_124.f_20), SYSTEM::FLOOR(uParam0->f_124.f_20.f_1), SYSTEM::FLOOR(uParam0->f_124.f_20.f_2), SYSTEM::FLOOR(uParam0->f_124.f_23.f_2));
  GRAPHICS::GOLF_TRAIL_SET_SHADER_PARAMS(uParam0->f_124.f_29, uParam0->f_124.f_30, uParam0->f_124.f_31, uParam0->f_124.f_32, uParam0->f_124.f_33);
}