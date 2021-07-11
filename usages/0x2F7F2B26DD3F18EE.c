// fm_mission_controller.c @ L807311
void func_13246(vector3 vParam0)
{
  float fVar0;
  vector3 vVar1;
  
  if (func_197(PLAYER::PLAYER_ID(), 1, 1))
  {
    vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), vParam0) };
    fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
    CAM::_0x2F7F2B26DD3F18EE(-180f, 180f);
  }
}