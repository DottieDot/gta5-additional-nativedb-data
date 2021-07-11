// franklin1.c @ L18517
int func_263(int iParam0, float fParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
    {
      if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, 0, 2))
      {
        ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
        WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iParam0);
        return 1;
      }
      if ((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 22) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 88)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 125))
      {
        return 1;
      }
      if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam1, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam1, 0))
      {
        return 1;
      }
    }
  }
  return 0;
}