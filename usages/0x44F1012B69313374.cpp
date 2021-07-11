// freemode.ysc @ L153337
void func_1830(var uParam0, var uParam1, var uParam2, var uParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  vector3 vVar3;
  
  STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_apartment_mp");
  *uParam3 = 1;
  if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_apartment_mp"))
  {
    if (func_514(uParam0, 4000, 0))
    {
      iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(-20, 20);
      iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(20, 40);
      iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(-10, 20);
      vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), IntToFloat(iVar0), IntToFloat(iVar1), IntToFloat(iVar2)) };
      WEAPON::_FIRE_AIR_DEFENSE_WEAPON(uParam1, vVar3);
      func_1831(vVar3, vVar3, uParam1, uParam2);
    }
  }
}