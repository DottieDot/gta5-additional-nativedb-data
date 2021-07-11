// gb_smuggler.ysc @ L15342
void func_338(int iParam0, int iParam1)
{
  if (!func_190(iParam0))
  {
    if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("TUG"))
    {
      VEHICLE::SET_BOAT_ANCHOR(iParam1, true);
      VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
      VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, 0.2f);
      VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 0);
      VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(iParam1, 1);
    }
    if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("submersible2"))
    {
      VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, 1);
      VEHICLE::_0xDBC631F109350B8C(iParam1, 1);
    }
    if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("CARGOBOB2"))
    {
      VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, 0);
      VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
      VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, 1.2f);
      VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 1);
    }
  }
}