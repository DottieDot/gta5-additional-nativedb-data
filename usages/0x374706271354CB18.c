// gb_delivery.c @ L132760
void func_1231(bool bParam0, var uParam1, var uParam2)
{
  float fVar0;
  vector3 vVar1;
  vector3 vVar2;
  
  if (bParam0)
  {
    ENTITY::SET_ENTITY_HEADING(*uParam2, ENTITY::GET_ENTITY_HEADING(*uParam1));
    fVar0 = ENTITY::GET_ENTITY_HEADING(*uParam1);
    vVar1 = { func_1232(fVar0) };
    vVar2 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) - Vector(3.5f, 0f, 0f) + vVar1 * Vector(1.6f, 1.6f, 1.6f) };
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam2, vVar2, 0, 0, 1);
    VEHICLE::_ATTACH_ENTITY_TO_CARGOBOB(*uParam1, *uParam2, -1, 0f, 0f, 0f);
    VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(*uParam1, *uParam2, 0.1f);
  }
  else
  {
    VEHICLE::_DETACH_ENTITY_FROM_CARGOBOB(*uParam1, *uParam2);
    ENTITY::DETACH_ENTITY(*uParam2, 1, true);
  }
}