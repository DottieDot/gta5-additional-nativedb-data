// fm_mission_controller.c @ L638626
void func_10215(int iParam0, int iParam1)
{
  vector3 vVar0;
  vector3 vVar1;
  vector3 vVar2;
  vector3 vVar3;
  vector3 vVar4;
  
  NETWORK::_0xF1B84178F8674195(1000);
  ENTITY::GET_ENTITY_MATRIX(iParam0, &vVar2, &vVar1, &vVar3, &vVar0);
  vVar1 = { vVar1 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-44f, 44f)) };
  vVar2 = { vVar2 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f)) };
  vVar3 = { vVar3 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f)) };
  vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) + vVar1 + vVar2 + vVar3 };
  vVar0 = { vVar0 - func_9810(iParam0) * Vector(5f, 5f, 5f) };
  FIRE::ADD_EXPLOSION(vVar0, 58, 1f, iParam1, 0, 1.1f, 0);
  vVar4 = { vVar0 };
  WATER::GET_WATER_HEIGHT(vVar4, &(vVar4.f_2));
  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xm_submarine");
  GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_xm_submarine_surface_explosion", vVar4, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
}