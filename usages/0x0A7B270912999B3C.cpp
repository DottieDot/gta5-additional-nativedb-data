// abigail1.ysc @ L33951
void func_210(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0))
    {
      ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
    }
    if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
    }
    PED::DELETE_PED(iParam0);
  }
}