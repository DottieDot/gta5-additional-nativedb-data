// family1.ysc @ L25310
void func_382(int iParam0)
{
  float fVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
  {
    if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
    {
      GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
      VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_342, 0f);
      fLocal_97 = ENTITY::GET_ENTITY_SPEED(iParam0);
      fLocal_3093 = ENTITY::GET_ENTITY_SPEED(iLocal_342);
      if (fLocal_3093 > fLocal_97)
      {
        if ((fLocal_3093 + 1f) > fLocal_97)
        {
          fVar0 = 0.05f;
        }
      }
      else
      {
        fVar0 = -0.06f;
      }
      fLocal_3090 = (fLocal_391 * 30f);
      fLocal_389 = (fLocal_389 + (fVar0 * SYSTEM::TIMESTEP()));
    }
  }
}