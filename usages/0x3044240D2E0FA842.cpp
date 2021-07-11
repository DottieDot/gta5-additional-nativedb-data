// fm_mission_controller.ysc @ L602204
void func_9561(bool bParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
  if (iParam9 > -1)
  {
    GRAPHICS::_0x736D7AA1B750856B(vParam1, vParam3, vParam2, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam8, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam8, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam9, "Deadline", "Deadline_Trail_01", iParam10, 1f, 1f, iParam10, 0f, 1f, iParam11, 1f, 1f);
    GRAPHICS::_0x736D7AA1B750856B(vParam3, vParam4, vParam2, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam8, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam9, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam9, "Deadline", "Deadline_Trail_01", iParam10, 0f, 1f, iParam11, 0f, 1f, iParam11, 1f, 1f);
    if (bParam0)
    {
      GRAPHICS::_0x736D7AA1B750856B(vParam1 + Vector(0f, fLocal_7168, fLocal_7168), vParam1 + Vector(0f, fLocal_7168, -fLocal_7168), vParam2 + Vector(0f, -fLocal_7168, fLocal_7168), IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam8, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam8, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam9, "Deadline", "Deadline_Trail_01", iParam10, 0.55f, 1f, iParam10, 0.5f, 1f, iParam11, 0.55f, 1f);
      GRAPHICS::_0x736D7AA1B750856B(vParam1 + Vector(0f, fLocal_7168, fLocal_7168), vParam2 + Vector(0f, -fLocal_7168, -fLocal_7168), vParam2 + Vector(0f, -fLocal_7168, fLocal_7168), IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam8, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam9, IntToFloat(iParam5), IntToFloat(iParam6), IntToFloat(iParam7), iParam9, "Deadline", "Deadline_Trail_01", iParam10, 0.5f, 1f, iParam11, 0.5f, 1f, iParam11, 0.55f, 1f);
    }
  }
  else
  {
    GRAPHICS::_0x29280002282F1928(vParam1, vParam3, vParam2, iParam5, iParam6, iParam7, iParam8, "Deadline", "Deadline_Trail_01", 0f, 1f, 1f, 0f, 0f, 1f, 1f, 1f, 1f);
    GRAPHICS::_0x29280002282F1928(vParam3, vParam4, vParam2, iParam5, iParam6, iParam7, iParam8, "Deadline", "Deadline_Trail_01", 0f, 0f, 1f, 1f, 0f, 1f, 1f, 1f, 1f);
  }
  if (!Global_1312791)
  {
    if (CAM::DOES_CAM_EXIST(Global_2508006))
    {
      if ((CAM::_0x705A276EBFF3133D() || CAM::_0x3044240D2E0FA842()) || iLocal_7182)
      {
        GRAPHICS::DRAW_LINE(vParam1, vParam2, iParam5, iParam6, iParam7, iParam8);
      }
    }
  }
}