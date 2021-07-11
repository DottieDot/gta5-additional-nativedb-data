// director_mode.ysc @ L153375
void func_1127()
{
  if (CAM::_0x5C48A1D6E3B33179(iLocal_425))
  {
    fLocal_430 = (fLocal_430 + (fLocal_380 * fLocal_434));
    vLocal_426.z = fLocal_430;
    CAM::SET_CAM_COORD(iLocal_425, Local_362 + vLocal_426);
  }
  else
  {
    vLocal_426 = { Vector(0f, SYSTEM::COS(fLocal_429), -SYSTEM::SIN(fLocal_429)) * Vector(fLocal_431, fLocal_431, fLocal_431) + Vector(fLocal_430, 0f, 0f) };
    CAM::SET_CAM_COORD(iLocal_425, Local_362 + vLocal_426);
  }
  CAM::POINT_CAM_AT_ENTITY(iLocal_425, Local_362.f_11, 0f, 0f, func_1041(fLocal_430, (Local_362.f_6.f_2 / 2f)), 1);
  ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_362.f_11, 0f, -2f, 15f), 1, false, 0, 1);
  ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_362.f_3.f_2);
}