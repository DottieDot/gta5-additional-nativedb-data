// business_battles.c @ L138941
void func_1170(int iParam0, int iParam1)
{
  if (func_1171(iParam0, 0) != joaat("WEAPON_UNARMED"))
  {
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, func_502(iParam0, func_3620(), func_461(), 0, 0), 3f, 0, 0);
  }
  ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, Global_1575005);
  ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, Global_1575000);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam1, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
}