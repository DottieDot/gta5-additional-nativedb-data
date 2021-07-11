// agency_heist3b.c @ L129758
int func_883(vector3 vParam0, float fParam1, float fParam2)
{
  if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
  {
    if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam0, fParam2, fParam2, fParam2, false, false, 0))
    {
      return 0;
    }
    else if (CAM::IS_SCREEN_FADED_OUT())
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}