// fm_capture_creator.ysc @ L175774
void func_1360(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, vector3 vParam6, vector3 vParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
  GRAPHICS::SET_BACKFACECULLING(0);
  func_1361(vParam0, vParam1, vParam2, vParam3, iParam8, iParam9, iParam10, iParam11);
  func_1361(vParam1, vParam5, vParam6, vParam2, iParam8, iParam9, iParam10, iParam11);
  func_1361(vParam2, vParam6, vParam7, vParam3, iParam8, iParam9, iParam10, iParam11);
  func_1361(vParam0, vParam3, vParam7, vParam4, iParam8, iParam9, iParam10, iParam11);
  func_1361(vParam0, vParam4, vParam5, vParam1, iParam8, iParam9, iParam10, iParam11);
  func_1361(vParam4, vParam7, vParam6, vParam5, iParam8, iParam9, iParam10, iParam11);
  GRAPHICS::SET_BACKFACECULLING(1);
}