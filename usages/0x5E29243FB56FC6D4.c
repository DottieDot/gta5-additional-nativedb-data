// bailbond1.c @ L37056
void func_327()
{
  if (func_24(Local_68.f_9))
  {
    if (((Local_68.f_10 != 23 && Local_68.f_10 != 24) && Local_68.f_10 != 21) && Local_68.f_10 != 22)
    {
      PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_319);
      PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_319, 1862763509);
      if (PED::IS_PED_IN_GROUP(Local_68.f_9))
      {
        PED::REMOVE_PED_FROM_GROUP(Local_68.f_9);
      }
      TASK::CLEAR_PED_SECONDARY_TASK(Local_68.f_9);
      TASK::CLEAR_PED_TASKS(Local_68.f_9);
      ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68.f_9, false, 1);
      WEAPON::SET_PED_DROPS_WEAPON(Local_68.f_9);
      WEAPON::REMOVE_ALL_PED_WEAPONS(Local_68.f_9, 1);
      WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_9, joaat("WEAPON_UNARMED"), true);
      PED::SET_PED_CAN_SWITCH_WEAPON(Local_68.f_9, false);
      PED::SET_PED_ARMOUR(Local_68.f_9, 0);
      PED::SET_PED_FLEE_ATTRIBUTES(Local_68.f_9, 1, false);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 17, true);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 0, false);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_68.f_9, 5, false);
      if (PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_9, 1))
      {
        TASK::TASK_LEAVE_ANY_VEHICLE(Local_68.f_9, 0, 0);
      }
      iLocal_139 = MISC::GET_GAME_TIMER();
      Local_68.f_10 = 23;
    }
  }
}