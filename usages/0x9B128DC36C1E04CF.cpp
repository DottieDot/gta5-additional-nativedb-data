// gb_biker_burn_assets.ysc @ L3575
void func_79(int iParam0, var uParam1, var uParam2)
{
  int iVar0;
  
  if (!func_842())
  {
    return;
  }
  if (!func_6(2) && !func_840(NETWORK::PARTICIPANT_ID(), 2))
  {
    iVar0 = NETWORK::NET_TO_PED(iParam0);
    if (((func_81(iVar0, 30f, 1) || (PED::IS_PED_BEING_JACKED(iVar0) && PED::GET_PEDS_JACKER(iVar0) == PLAYER::PLAYER_PED_ID())) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar0, true), 5f, 1)) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(ENTITY::GET_ENTITY_COORDS(iVar0, true), joaat("WEAPON_MOLOTOV"), 5f, 1))
    {
      func_80(2);
    }
  }
}