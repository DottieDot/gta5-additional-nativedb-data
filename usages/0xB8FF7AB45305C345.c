// fm_mission_controller.c @ L710844
void func_11731(int iParam0)
{
  int iVar0;
  
  if (!MISC::IS_BIT_SET(Global_4456448.f_92415[iParam0 /*282*/].f_58, 10))
  {
    return;
  }
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_4819.f_834.f_81[iParam0]))
  {
    iVar0 = NETWORK::NET_TO_VEH(Local_4819.f_834.f_81[iParam0]);
    if (!VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iVar0))
    {
      if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == iVar0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0))
      {
        VEHICLE::SET_VEHICLE_ALARM(iVar0, 1);
        VEHICLE::START_VEHICLE_ALARM(iVar0);
      }
    }
  }
}