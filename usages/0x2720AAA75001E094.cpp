// paparazzo2.ysc @ L52224
void func_500()
{
  if (!func_28(Local_480, uLocal_758[0]))
  {
    if (func_649(Local_480) && func_5(uLocal_758[0]))
    {
      if (!iLocal_294)
      {
        if (ENTITY::IS_ENTITY_AT_ENTITY(Local_480, uLocal_758[0], 5f, 5f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_759, 20f, 20f, 2f, 0, 1, 0))
        {
          iLocal_294 = 1;
        }
        if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) > 24) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -43.12919f, 298.2647f, 111.3944f, -67.07028f, 306.1256f, 114.8987f, 9.25f, 0, true, 0))
        {
          iLocal_294 = 1;
        }
      }
      else
      {
        if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_480, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
        {
          TASK::STOP_ANIM_TASK(Local_480, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
        }
        if (TASK::GET_SCRIPT_TASK_STATUS(Local_480, -1794415470) != 1)
        {
          TASK::TASK_ENTER_VEHICLE(Local_480, uLocal_758[0], -1, -1, 2f, 1, 0);
        }
      }
    }
  }
}