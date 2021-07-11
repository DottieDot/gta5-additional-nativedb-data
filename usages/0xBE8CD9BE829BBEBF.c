// am_casino_peds.c @ L297152
void func_3677(var uParam0, var uParam1)
{
  bool bVar0;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  var uVar5;
  var uVar6;
  var uVar7;
  
  if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (func_2556(uParam0->f_22.f_86, 0))
    {
      HUD::CLEAR_HELP(1);
      func_1565(&(uParam0->f_22.f_86));
    }
  }
  func_3678(0);
  if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    if (func_15(PLAYER::PLAYER_PED_ID()) && ENTITY::_GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
    {
      if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
      {
        ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
        VEHICLE::_SET_DISABLE_VEHICLE_UNK_2(1);
      }
    }
  }
}