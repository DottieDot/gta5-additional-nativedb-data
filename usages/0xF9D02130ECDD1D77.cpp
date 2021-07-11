// sctv.ysc @ L100475
void func_655(var uParam0, int iParam1)
{
  vector3 vVar0;
  
  if (!CAM::DOES_CAM_EXIST(*uParam0))
  {
    *uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_FLY_CAMERA", false);
  }
  CAM::SET_FLY_CAM_MAX_HEIGHT(*uParam0, 820f);
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (!func_86(uParam0->f_2))
    {
      CAM::SET_CAM_COORD(*uParam0, uParam0->f_2);
      CAM::SET_CAM_ROT(*uParam0, uParam0->f_5, 2);
    }
    else
    {
      if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &vVar0, 1, 1077936128, 0))
      {
        ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar0 + Vector(1f, 0f, 0f), 1, true, 0, 0);
      }
      CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(iParam1, 0f, 0f));
    }
    func_573(uParam0);
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
    ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
    PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), 0);
    ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, 0);
  }
}