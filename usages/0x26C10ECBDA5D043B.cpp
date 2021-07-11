// gb_casino_heist.ysc @ L24859
void func_424(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
  VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
  if (func_426(iVar0) != 1f)
  {
    VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, 0);
    VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
    VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, func_426(iVar0));
  }
  if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
  {
    VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
  }
  func_425(iParam1);
  VEHICLE::_0xDBC631F109350B8C(iParam1, 1);
  VEHICLE::_0x2311DD7159F00582(iParam1, 1);
  VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, 1);
  switch (func_7911())
  {
    case 6:
      if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iParam1))
      {
        VEHICLE::SET_BOAT_ANCHOR(iParam1, true);
      }
      break;
  }
}