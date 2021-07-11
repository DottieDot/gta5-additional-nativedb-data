// gb_ploughed.ysc @ L1291
int func_47(int iParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  int iVar2;
  
  if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_267.f_49[iParam0]))
  {
    iVar2 = func_46();
    if (func_51(iVar2))
    {
      vVar0 = { func_50(iParam0) };
      vVar1 = { func_49(iParam0) };
      if (func_48(&(Local_267.f_49[iParam0]), iVar2, vVar0, 1, 1, 0, 1, 0, 0, 0))
      {
        MISC::CLEAR_AREA(vVar0, 1f, 0, 0, 0, false);
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(Local_267.f_49[iParam0]), vVar0, 0, 0, 1);
        ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_267.f_49[iParam0]), vVar1, 2, 1);
        ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_ENT(Local_267.f_49[iParam0]), 1000, 0);
        ENTITY::_0xB17BC6453F6CF5AC(NETWORK::NET_TO_ENT(Local_267.f_49[iParam0]), NETWORK::NET_TO_ENT(Local_267.f_17));
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_ENT(Local_267.f_49[iParam0]), 1);
        PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_ENT(Local_267.f_49[iParam0]), 1);
        ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_267.f_49[iParam0]), true);
      }
    }
  }
  else
  {
    return 1;
  }
  return 0;
}