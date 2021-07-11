// carsteal3.ysc @ L99742
int func_451(int iParam0, int iParam1)
{
  vector3 vVar0;
  
  if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
    if (((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 29) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 60)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || MISC::IS_BULLET_IN_AREA(vVar0, 16f, 1)) || MISC::IS_BULLET_IN_AREA(vVar0, 16f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 16f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1))
    {
      return 1;
    }
  }
  return 0;
}