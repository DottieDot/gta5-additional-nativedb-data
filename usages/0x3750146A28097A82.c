// barry2.c @ L38222
void func_305(var uParam0)
{
  if (*uParam0 == 0)
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
  {
  }
  VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uParam0->f_3, 0);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_3, 0, 0);
  func_307(&(uParam0->f_3));
  func_306(uParam0);
}