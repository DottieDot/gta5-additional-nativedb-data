// hao1.ysc @ L48984
void func_541(int iParam0)
{
  if (func_686(Local_574[iParam0 /*18*/].f_3))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_574[iParam0 /*18*/].f_3, true);
    VEHICLE::SET_VEHICLE_IS_RACING(Local_574[iParam0 /*18*/].f_6, 1);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_574[iParam0 /*18*/].f_6, 0);
    VEHICLE::SET_VEHICLE_ENGINE_ON(Local_574[iParam0 /*18*/].f_6, true, true, 0);
    ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_574[iParam0 /*18*/].f_3, true);
    ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_574[iParam0 /*18*/].f_6, true);
    VEHICLE::SET_VEHICLE_STRONG(Local_574[iParam0 /*18*/].f_6, true);
    VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_574[iParam0 /*18*/].f_6, true);
    VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_574[iParam0 /*18*/].f_6, false);
    PED::SET_PED_CONFIG_FLAG(Local_574[iParam0 /*18*/].f_3, 32, false);
    PED::SET_PED_CONFIG_FLAG(Local_574[iParam0 /*18*/].f_3, 29, false);
    PED::SET_PED_CONFIG_FLAG(Local_574[iParam0 /*18*/].f_3, 116, false);
    PED::SET_PED_CONFIG_FLAG(Local_574[iParam0 /*18*/].f_3, 118, false);
    PED::SET_PED_CONFIG_FLAG(Local_574[iParam0 /*18*/].f_3, 26, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_574[iParam0 /*18*/].f_6, true, 1);
    PED::SET_PED_DIES_IN_WATER(Local_574[iParam0 /*18*/].f_3, 0);
    if (Local_568.f_1 == 3)
    {
      ENTITY::_SET_ENTITY_SOMETHING(Local_574[iParam0 /*18*/].f_6, false);
      PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_574[iParam0 /*18*/].f_3, 3);
    }
    Local_574[iParam0 /*18*/] = 0;
  }
}