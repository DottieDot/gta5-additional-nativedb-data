// fm_mission_controller.ysc @ L599610
void func_9515()
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(iLocal_1073))
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_1073, 0))
    {
      func_9516();
      iVar0 = 0;
      WEAPON::GET_CURRENT_PED_WEAPON(iLocal_1073, &iVar0, 1);
      if (iVar0 != joaat("WEAPON_UNARMED"))
      {
        PED::SET_PED_RESET_FLAG(iLocal_1073, 128, true);
        PLAYER::DISABLE_PLAYER_FIRING(iLocal_1071, 1);
        if (func_9089(iVar0))
        {
          WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1073, joaat("WEAPON_UNARMED"), true);
          WEAPON::REMOVE_ALL_PROJECTILES_OF_TYPE(joaat("WEAPON_GRENADE"), 0);
          WEAPON::REMOVE_ALL_PROJECTILES_OF_TYPE(joaat("WEAPON_STICKYBOMB"), 0);
        }
      }
    }
  }
}