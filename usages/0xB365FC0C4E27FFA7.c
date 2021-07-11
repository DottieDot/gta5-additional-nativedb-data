// fm_mission_controller.c @ L657076
void func_10619(int iParam0)
{
  if (!ENTITY::IS_ENTITY_ATTACHED(iParam0))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
  }
  ENTITY::SET_ENTITY_DYNAMIC(iParam0, 0);
  ENTITY::SET_ENTITY_VISIBLE(iParam0, true, 0);
  INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0);
}