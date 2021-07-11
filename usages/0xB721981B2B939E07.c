// fm_mission_controller.c @ L561034
void func_8907()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1073, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_1073, 0)))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_1073, 0);
    if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_1071))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1073, false);
    }
    ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
    NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, 1, 0, -1);
  }
}