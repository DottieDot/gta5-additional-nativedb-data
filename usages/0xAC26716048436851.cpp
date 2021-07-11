// fm_capture_creator.ysc @ L175786
void func_1361(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
  GRAPHICS::DRAW_POLY(vParam1, vParam0, vParam2, iParam4, iParam5, iParam6, iParam7);
  GRAPHICS::DRAW_POLY(vParam3, vParam2, vParam0, iParam4, iParam5, iParam6, iParam7);
  GRAPHICS::DRAW_POLY(vParam2, vParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
  GRAPHICS::DRAW_POLY(vParam0, vParam2, vParam3, iParam4, iParam5, iParam6, iParam7);
}