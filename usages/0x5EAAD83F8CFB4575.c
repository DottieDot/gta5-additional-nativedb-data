// fm_race_creator.c @ L421705
int func_6639(var uParam0)
{
  *uParam0 = OBJECT::_GET_PICKUP_HASH(*uParam0);
  switch (*uParam0)
  {
    case joaat("PICKUP_WEAPON_GRENADE"):
    case joaat("PICKUP_WEAPON_MOLOTOV"):
    case joaat("PICKUP_WEAPON_STICKYBOMB"):
    case joaat("PICKUP_WEAPON_SMOKEGRENADE"):
    case joaat("PICKUP_WEAPON_PROXMINE"):
    case joaat("PICKUP_WEAPON_PIPEBOMB"):
      return 1;
      break;
  }
  return 0;
}