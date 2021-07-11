// finalec2.c @ L139361
void func_1019()
{
  vector3 vVar0;
  vector3 vVar1;
  var uVar2;
  vector3 vVar3;
  vector3 vVar4;
  
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
  {
    ENTITY::GET_ENTITY_MATRIX(iLocal_139, &vVar1, &vVar0, &uVar2, &vVar3);
    vVar4 = { vVar3 + vVar0 * Vector(0.165f, 0.165f, 0.165f) + vVar1 * Vector(0.169f, 0.169f, 0.169f) };
    GRAPHICS::_DRAW_SPOT_LIGHT_WITH_SHADOW(vVar4, vVar0, 255, 255, 255, 4f, 0.2f, 20f, 25f, 2.5f, 0);
  }
}