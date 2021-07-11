// carsteal3.ysc @ L95813
void func_347(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (iParam3 == 1)
    {
      PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, vParam1);
    }
    else if (iParam3 == 0)
    {
      ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
    }
    ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
    if (iParam0 == PLAYER::PLAYER_PED_ID())
    {
      if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
      {
        PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
      }
      if (iParam4 == 1)
      {
        CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
        CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
      }
      if (iParam5 == 1)
      {
        STREAMING::LOAD_SCENE(vParam1);
      }
    }
  }
}