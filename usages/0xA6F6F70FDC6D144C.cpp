// range_modern.ysc @ L101225
void func_447(var uParam0)
{
  vector3 vVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2.f_11))
  {
    vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_2.f_11) };
    GRAPHICS::REMOVE_DECALS_FROM_OBJECT_FACING(uParam0->f_2.f_11, vVar0);
  }
  vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_2.f_12) };
  GRAPHICS::REMOVE_DECALS_FROM_OBJECT_FACING(uParam0->f_2.f_12, vVar0);
}