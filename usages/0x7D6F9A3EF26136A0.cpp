// am_penned_in.ysc @ L1678
void func_7(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
  ENTITY::SET_ENTITY_PROOFS(iVar0, true, true, true, true, false, false, 0, false);
  ENTITY::_SET_ENTITY_SOMETHING(iVar0, false);
  iVar1 = NETWORK::NET_TO_VEH(uParam0->f_2);
  VEHICLE::_0x7D6F9A3EF26136A0(iVar1, false, 0);
  VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iVar1, false);
  iVar2 = NETWORK::NET_TO_ENT(uParam0->f_3);
  ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
  VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, 0);
  VEHICLE::SET_HELI_TURBULENCE_SCALAR(iVar1, 0.3f);
  VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
  PHYSICS::ACTIVATE_PHYSICS(iVar1);
  func_8(1);
}