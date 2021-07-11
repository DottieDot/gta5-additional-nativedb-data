// am_casino_peds.c @ L286286
void func_3436(var uParam0, var uParam1, var uParam2, var uParam3)
{
  if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    ENTITY::SET_ENTITY_DYNAMIC(*uParam1, 0);
    ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, 0);
    ENTITY::SET_ENTITY_COLLISION(*uParam1, true, 0);
    ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
  {
    ENTITY::SET_ENTITY_VISIBLE(*uParam2, true, 0);
    ENTITY::SET_ENTITY_COLLISION(*uParam2, false, 0);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam2, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
  {
    ENTITY::SET_ENTITY_VISIBLE(*uParam3, true, 0);
    ENTITY::SET_ENTITY_COLLISION(*uParam3, false, 0);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
  {
    ENTITY::SET_ENTITY_DYNAMIC(*uParam0, 0);
    ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, 0);
    ENTITY::SET_ENTITY_COLLISION(*uParam0, false, 0);
    ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
  }
}