// gb_gunrunning_delivery.ysc @ L122415
void func_1207(var uParam0)
{
  vector3 vVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
  {
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], uParam0->f_65[0 /*3*/], 0, 0, 1);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], uParam0->f_65[1 /*3*/].f_2);
    vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 1.8f, -3.5f) };
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[1], vVar0, 0, 0, 1);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_28[1], ENTITY::GET_ENTITY_HEADING(uParam0->f_28[0]));
    VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(uParam0->f_28[0], uParam0->f_28[1], -1, 0f, 0f, -6f);
  }
}