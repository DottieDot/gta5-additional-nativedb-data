// abigail1.ysc @ L39857
void func_337(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
    if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
    {
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
    }
  }
}