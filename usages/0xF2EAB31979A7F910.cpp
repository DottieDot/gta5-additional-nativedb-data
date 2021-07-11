// freemode.ysc @ L170912
void func_2256(int iParam0)
{
  int iVar0;
  
  if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0->f_6) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(iParam0->f_6), 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(iParam0->f_6), 0))
    {
      WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
      if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(iParam0->f_6)) && iVar0 != joaat("WEAPON_UNARMED"))
      {
        if (func_2264(iParam0->f_6))
        {
          if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(iParam0->f_6), -1519143300) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(iParam0->f_6), -1519143300) != 0)
          {
            TASK::TASK_HANDS_UP(NETWORK::NET_TO_PED(iParam0->f_6), 3000, PLAYER::PLAYER_PED_ID(), -1, 0);
          }
          else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(iParam0->f_6), -1519143300) == 1)
          {
            TASK::UPDATE_TASK_HANDS_UP_DURATION(NETWORK::NET_TO_PED(iParam0->f_6), 2000);
          }
        }
      }
    }
  }
}