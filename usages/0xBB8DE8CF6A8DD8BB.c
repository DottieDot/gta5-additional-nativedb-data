// taxi_clowncar.c @ L1119
void func_21(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
    {
      if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
      {
        PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
      }
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
      PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, 1862763509);
      if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
      {
        TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
      }
      else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
      {
        TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
      }
      if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
      {
        TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
      }
      if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
      {
        TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
      }
      ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
    }
  }
}