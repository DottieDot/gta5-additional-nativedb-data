// gb_gunrunning_delivery.ysc @ L122325
void func_1200(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    return;
  }
  ENTITY::DETACH_ENTITY(*uParam0, 1, true);
  VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(*uParam0);
  ENTITY::SET_ENTITY_COLLISION(*uParam0, true, 0);
  ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
  ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 0, 0, 1);
}